#include "pacientsdialog.h"
#include "ui_pacientsdialog.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "filterproxymodel.h"  // Подключаем класс фильтрации
#include <QRegularExpression>  // Подключаем для работы с регулярными выражениями
#include <QMessageBox>
#include "addpatientdialog.h"  // Подключаем форму для добавления пациента
#include "addmedicalhistorydialog.h"  // Подключаем форму для добавления истории болезни

pacientsdialog::pacientsdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pacientsdialog)
{
    ui->setupUi(this);  // Настройка интерфейса

    model = new QSqlQueryModel(this);
    proxyModel = new FilterProxyModel(this);

    proxyModel->setSourceModel(model);

    // Привязываем прокси-модель к таблице
    ui->pacientsTableView->setModel(proxyModel);

    // Растягиваем столбцы на всю ширину pacientsTableView
   //ui->pacientsTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //автоматическое изменение высоты строк под содержимое
    ui->pacientsTableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    loadPacients();  // Загружаем данные при создании диалогового окна

    // Подключаем слот для обработки изменений в поле поиска
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &pacientsdialog::on_searchTextChanged);
}

pacientsdialog::~pacientsdialog()
{
    delete ui;  // Удаляем интерфейс
}

void pacientsdialog::loadPacients() {
    QSqlQuery query;

    // Выполняем SQL-запрос для получения данных о пациентах
    if (!query.exec("SELECT Familiya AS 'Фамилия', Imya AS 'Имя', Otchestvo AS 'Отчество', "
                    "Adres AS 'Адрес', Gorod AS 'Город', Vozrast AS 'Возраст', Pol AS 'Пол' "
                    "FROM Pacients")) {
        qDebug() << "Ошибка выполнения запроса: " << query.lastError().text();
        return;
    }

    // Устанавливаем данные в модель
    model->setQuery(std::move(query));

    // Настроим прокси-модель после загрузки данных
    proxyModel->setSourceModel(model);  // Устанавливаем исходную модель
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);  // Игнорируем регистр при поиске

    // Привязываем прокси-модель к таблице
    ui->pacientsTableView->setModel(proxyModel);
    // Отключаем сортировку по умолчанию, но оставляем возможность сортировки по столбцам
    ui->pacientsTableView->setSortingEnabled(true);

    // Убираем начальную сортировку
    ui->pacientsTableView->sortByColumn(-1, Qt::AscendingOrder);  // Убираем сортировку по умолчанию
}

void pacientsdialog::on_searchTextChanged(const QString &text) {
    // Передаем текст для фильтрации в ваш кастомный фильтрационный класс
    QRegularExpression regex(text, QRegularExpression::CaseInsensitiveOption);  // Создаем регулярное выражение
    proxyModel->setFilterRegularExpression(regex);  // Фильтруем по введенному тексту
}

void pacientsdialog::on_exitButton_clicked()
{
    this->close();  // Закрытие только текущего диалогового окна
}

void pacientsdialog::on_medicalHistoryButton_clicked() {
    QModelIndex currentIndex = ui->pacientsTableView->currentIndex();
    if (!currentIndex.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Пациент не выбран!");
        return;
    }


    // Получаем ФИО пациента
    QString fam = proxyModel->data(proxyModel->index(currentIndex.row(), 0)).toString();
    QString imya = proxyModel->data(proxyModel->index(currentIndex.row(), 1)).toString();
    QString otch = proxyModel->data(proxyModel->index(currentIndex.row(), 2)).toString();

    QSqlQuery query;

    // Запрос для получения истории болезни, связанных листов лечения и врача
    query.prepare(
        "SELECT mh.Data_Zabolevaniya, mh.Data_Vylechivaniya, mh.Diagnoz, mh.Vid_Lecheniya, "
        "ts.Data_Lecheniya, ts.Lekarstva, ts.Temperatura, ts.Davlenie, ts.Sostoyanie, "
        "d.Familiya AS Vrach_Familiya, d.Imya AS Vrach_Imya, d.Otchestvo AS Vrach_Otchestvo "
        "FROM MedicalHistory mh "
        "LEFT JOIN TreatmentSheet ts ON mh.ID_MedicalHistory = ts.ID_MedicalHistory "
        "JOIN Pacients p ON mh.ID_Pacient = p.ID_Pacient "
        "JOIN Doctors d ON mh.ID_Doctor = d.ID_Doctor "
        "WHERE p.Familiya = :fam AND p.Imya = :imya AND p.Otchestvo = :otch");

    query.bindValue(":fam", fam);
    query.bindValue(":imya", imya);
    query.bindValue(":otch", otch);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса: " << query.lastError().text();
        return;
    }

    QString resultText = "📋История болезней:\n";

    // Проходим по результатам запроса
    while (query.next()) {
        QString dataZabolevaniya = query.value("Data_Zabolevaniya").toString();
        QString dataVylechivaniya = query.value("Data_Vylechivaniya").toString();
        QString diagnoz = query.value("Diagnoz").toString();
        QString vidLecheniya = query.value("Vid_Lecheniya").toString();
        QString dataLecheniya = query.value("Data_Lecheniya").toString();
        QString lekarstva = query.value("Lekarstva").toString();
        QString temperatura = query.value("Temperatura").toString();
        QString davlenie = query.value("Davlenie").toString();
        QString sostoyanie = query.value("Sostoyanie").toString();

        // Получаем ФИО врача
        QString vrachFam = query.value("Vrach_Familiya").toString();
        QString vrachImya = query.value("Vrach_Imya").toString();
        QString vrachOtch = query.value("Vrach_Otchestvo").toString();
        QString vrachFullName = vrachFam + " " + vrachImya + " " + vrachOtch;

        // Добавляем информацию о болезни
        resultText += QString("\nДата заболевания: %1\n"
                              "Дата выздоровления: %2\n"
                              "Диагноз: %3\n"
                              "Вид лечения: %4\n"
                              "Врач: %5\n")
                          .arg(dataZabolevaniya, dataVylechivaniya, diagnoz, vidLecheniya, vrachFullName);

        // Добавляем лист лечения, если он есть
        if (!dataLecheniya.isEmpty()) {
            resultText += QString("\n📝Лист лечения:\n"
                                  " Дата лечения: %1\n"
                                  " Лекарства: %2\n"
                                  " Температура: %3\n"
                                  " Давление: %4\n"
                                  " Состояние: %5\n")
                              .arg(dataLecheniya, lekarstva, temperatura, davlenie, sostoyanie);
        }
    }

    // Если данные отсутствуют
    if (resultText == "История болезней:\n") {
        resultText += "\nНет данных по истории болезни или листам лечения.";
    }

    // Отображаем данные через QMessageBox
    QMessageBox::information(this, "История болезней", resultText);
}


void pacientsdialog::on_addPacient_clicked()
{
    addpatientdialog addPatientForm(this);  // Создаем форму для добавления пациента
    if (addPatientForm.exec() == QDialog::Accepted) {
        loadPacients();  // Перезагружаем список пациентов после добавления
    }
}


void pacientsdialog::on_addMHButton_clicked()
{
    // Получаем текущий выбранный индекс в таблице
    QModelIndex currentIndex = ui->pacientsTableView->currentIndex();
    if (!currentIndex.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Выберите пациента, для которого нужно добавить историю болезни!");
        return;
    }

    // Получаем информацию о пациенте
    QString fam = proxyModel->data(proxyModel->index(currentIndex.row(), 0)).toString();
    QString imya = proxyModel->data(proxyModel->index(currentIndex.row(), 1)).toString();
    QString otch = proxyModel->data(proxyModel->index(currentIndex.row(), 2)).toString();

    // Создаем форму для добавления истории болезни
    AddMedicalHistoryDialog *dialog = new AddMedicalHistoryDialog(this, fam, imya, otch);
    dialog->exec();  // Показываем форму как модальное окно

    // Обновляем данные таблицы после закрытия формы
    loadPacients();
}


void pacientsdialog::on_deleteButton_clicked()
{
    QModelIndex currentIndex = ui->pacientsTableView->currentIndex();

    if (!currentIndex.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Выберите запись для удаления!");
        return;
    }

    // Получаем данные о пациенте из текущей строки
    QString fam = proxyModel->data(proxyModel->index(currentIndex.row(), 0)).toString();
    QString imya = proxyModel->data(proxyModel->index(currentIndex.row(), 1)).toString();
    QString otch = proxyModel->data(proxyModel->index(currentIndex.row(), 2)).toString();

    // Подтверждение удаления
    int result = QMessageBox::question(this, "Удаление пациента",
                                       QString("Вы уверены, что хотите удалить пациента:\n%1 %2 %3?")
                                           .arg(fam, imya, otch),
                                       QMessageBox::Yes | QMessageBox::No);

    if (result == QMessageBox::No) {
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM Pacients WHERE Familiya = :fam AND Imya = :imya AND Otchestvo = :otch");
    query.bindValue(":fam", fam);
    query.bindValue(":imya", imya);
    query.bindValue(":otch", otch);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось удалить запись: " + query.lastError().text());
        return;
    }

    // Обновляем таблицу после удаления
    loadPacients();
    QMessageBox::information(this, "Успешно", "Запись удалена.");
}

