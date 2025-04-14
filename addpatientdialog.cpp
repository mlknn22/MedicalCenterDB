#include "addpatientdialog.h"
#include "ui_addpatientdialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
addpatientdialog::addpatientdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addpatientdialog)
{
    ui->setupUi(this);
}

addpatientdialog::~addpatientdialog()
{
    delete ui;
}



void addpatientdialog::on_okButton_clicked()
{
    // Получаем данные из полей формы
    QString lastName = ui->famLineEdit->text();
    QString firstName = ui->imyaLineEdit->text();
    QString middleName = ui->otchLineEdit->text();
    QString address = ui->adresLineEdit->text();
    QString city = ui->gorodLineEdit->text();
    int age = ui->vozrastSpinBox->value();
    QString gender = ui->polComboBox->currentText();

    // Проверяем, что все обязательные поля заполнены
    if (lastName.isEmpty() || firstName.isEmpty() || address.isEmpty() || city.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, заполните все обязательные поля!");
        return;
    }

    // Выполняем запрос на добавление данных пациента в базу
    QSqlQuery query;
    query.prepare("INSERT INTO Pacients (Familiya, Imya, Otchestvo, Adres, Gorod, Vozrast, Pol) "
                  "VALUES (:familiya, :imya, :otchestvo, :adres, :gorod, :vozrast, :pol)");

    // Привязываем параметры
    query.bindValue(":familiya", lastName);
    query.bindValue(":imya", firstName);
    query.bindValue(":otchestvo", middleName);
    query.bindValue(":adres", address);
    query.bindValue(":gorod", city);
    query.bindValue(":vozrast", age);
    query.bindValue(":pol", gender);

    // Выполняем запрос
    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось добавить пациента в базу данных: " + query.lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Пациент успешно добавлен!");
        accept();  // Закрываем форму
    }
}



void addpatientdialog::on_cancelButton_clicked()
{
    reject();
}

