#include "departmentsdialog.h"
#include "ui_departmentsdialog.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "filterproxymodel.h"  // Подключаем ваш класс фильтрации
#include <QRegularExpression>  // Подключаем для работы с регулярными выражениями
#include <QMessageBox>

departmentsdialog::departmentsdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::departmentsdialog)
{
    ui->setupUi(this);  // Настройка интерфейса

    model = new QSqlQueryModel(this);
    proxyModel = new FilterProxyModel(this);  // Используем ваш кастомный фильтрационный класс

    // Устанавливаем исходную модель в кастомный фильтрующий класс
    proxyModel->setSourceModel(model);

    // Привязываем прокси-модель к таблице
    ui->departmentsTableView->setModel(proxyModel);

    // Растягиваем столбцы на всю ширину departmentsTableView
    ui->departmentsTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Дополнительно: автоматическое изменение высоты строк под содержимое
    ui->departmentsTableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    loadDepartments();  // Загружаем данные при создании диалогового окна

    // Подключаем слот для обработки изменений в поле поиска
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &departmentsdialog::on_searchTextChanged);
    connect(ui->departmentsTableView, &QTableView::doubleClicked, this, &departmentsdialog::on_departmentDoubleClicked);

}

departmentsdialog::~departmentsdialog()
{
    delete ui;  // Удаляем интерфейс
}

void departmentsdialog::loadDepartments() {
    QSqlQuery query;

    // Выполняем SQL-запрос для получения данных об отделениях
    if (!query.exec("SELECT Nazvanie AS 'Название', Etazh AS 'Этаж', "
                    "Nomera_Komnat AS 'Номера комнат', FIO_Zaveduyushchego AS 'Заведующий' "
                    "FROM Departments")) {
        qDebug() << "Ошибка выполнения запроса: " << query.lastError().text();
        return;
    }

    // Устанавливаем данные в модель
    model->setQuery(std::move(query));

    // Настроим прокси-модель после загрузки данных
    proxyModel->setSourceModel(model);  // Устанавливаем исходную модель
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);  // Игнорируем регистр при поиске

    // Привязываем прокси-модель к таблице
    ui->departmentsTableView->setModel(proxyModel);

    // Растягиваем столбцы на всю ширину departmentsTableView
    ui->departmentsTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Дополнительно: автоматическое изменение высоты строк под содержимое
    ui->departmentsTableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

void departmentsdialog::on_searchTextChanged(const QString &text) {
    // Передаем текст для фильтрации в ваш кастомный фильтрационный класс
    QRegularExpression regex(text, QRegularExpression::CaseInsensitiveOption);  // Создаем регулярное выражение
    proxyModel->setFilterRegularExpression(regex);  // Фильтруем по введенному тексту
}

void departmentsdialog::on_departmentDoubleClicked(const QModelIndex &index) {
    // Получаем название отделения из выбранной строки
    QString departmentName = model->data(model->index(index.row(), 0)).toString();

    QSqlQuery query;
    query.prepare("SELECT Familiya + ' ' + Imya + ' ' + Otchestvo AS FIO, Dolzhnost "
                  "FROM Doctors "
                  "INNER JOIN Departments ON Doctors.ID_Department = Departments.ID_Department "
                  "WHERE Departments.Nazvanie = :departmentName");
    query.bindValue(":departmentName", departmentName);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось загрузить список врачей: " + query.lastError().text());
        return;
    }

    QString doctorList = "Список врачей:\n";
    while (query.next()) {
        QString fio = query.value("FIO").toString();
        QString position = query.value("Dolzhnost").toString();
        doctorList += fio + " (" + position + ")\n";
    }

    if (doctorList == "Список врачей:\n") {
        doctorList = "В этом отделении нет врачей.";
    }

    // Показываем список врачей в диалоговом окне
    QMessageBox::information(this, "Врачи в отделении: " + departmentName, doctorList);
}

void departmentsdialog::on_exitButton_clicked()
{
    this->close();  // Закрытие только текущего диалогового окна
}
