#include "doctorsdialog.h"
#include "ui_doctorsdialog.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "filterproxymodel.h"  // Подключаем класс фильтрации
#include <QRegularExpression>  // Подключаем для работы с регулярными выражениями
#include <adddoctorsdialog.h>
#include<QMessageBox>

doctorsdialog::doctorsdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::doctorsdialog)
{
    ui->setupUi(this);  // Настройка интерфейса

    model = new QSqlQueryModel(this);
    proxyModel = new FilterProxyModel(this);

    proxyModel->setSourceModel(model);

    ui->doctorsTableView->setModel(proxyModel);

    // Растягиваем столбцы на всю ширину doctorsTableView
    ui->doctorsTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Дополнительно: автоматическое изменение высоты строк под содержимое
    ui->doctorsTableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    loadDoctors();  // Загружаем данные при создании диалогового окна

    // Подключаем слот для обработки изменений в поле поиска
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &doctorsdialog::on_searchTextChanged);

}

doctorsdialog::~doctorsdialog()
{
    delete ui;
}

void doctorsdialog::loadDoctors() {
    QSqlQuery query;

    if (!query.exec("SELECT Familiya AS 'Фамилия', Imya AS 'Имя', Dolzhnost AS 'Должность', "
                    "Stazh_Raboty AS 'Стаж работы' FROM Doctors")) {
        qDebug() << "Ошибка выполнения запроса: " << query.lastError().text();
        return;
    }

    model->setQuery(std::move(query));

    proxyModel->setSourceModel(model);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);  // Игнорируем регистр при поиске


    // Привязываем прокси-модель к таблице
    ui->doctorsTableView->setModel(proxyModel);

    // Отключаем сортировку по умолчанию, но оставляем возможность сортировки по столбцам
    ui->doctorsTableView->setSortingEnabled(true);

    // Убираем начальную сортировку
    ui->doctorsTableView->sortByColumn(-1, Qt::AscendingOrder);  // Убираем сортировку по умолчанию

}

void doctorsdialog::on_searchTextChanged(const QString &text) {
    QRegularExpression regex(text, QRegularExpression::CaseInsensitiveOption);
    proxyModel->setFilterRegularExpression(regex);  // Фильтруем по введенному тексту
}

void doctorsdialog::on_exitButton_clicked()
{
    this->close();
}



void doctorsdialog::on_deleteButton_clicked()
{
    QModelIndex currentIndex = ui->doctorsTableView->currentIndex();

    if (!currentIndex.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Выберите запись для удаления!");
        return;
    }

    // Получаем данные о враче из текущей строки
    QString fam = proxyModel->data(proxyModel->index(currentIndex.row(), 0)).toString();
    QString imya = proxyModel->data(proxyModel->index(currentIndex.row(), 1)).toString();
    QString dolzhnost = proxyModel->data(proxyModel->index(currentIndex.row(), 2)).toString();

    // Подтверждение удаления
    int result = QMessageBox::question(this, "Удаление врача",
                                       QString("Вы уверены, что хотите удалить врача:\n%1 %2, Должность: %3?")
                                           .arg(fam, imya, dolzhnost),
                                       QMessageBox::Yes | QMessageBox::No);

    if (result == QMessageBox::No) {
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM Doctors WHERE Familiya = :fam AND Imya = :imya");
    query.bindValue(":fam", fam);
    query.bindValue(":imya", imya);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось удалить запись: " + query.lastError().text());
        return;
    }

    // Обновляем таблицу после удаления
    loadDoctors();
    QMessageBox::information(this, "Успешно", "Запись удалена.");
}





void doctorsdialog::on_addDoctor_clicked()
{
    AddDoctorsDialog addDoctorsDialogForm(this);  // Название переменной в нижнем регистре
    if (addDoctorsDialogForm.exec() == QDialog::Accepted) {
        loadDoctors();  // Перезагружаем список врачей после добавления
    }
}

