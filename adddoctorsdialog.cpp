#include "adddoctorsdialog.h"
#include "ui_adddoctorsdialog.h"
#include<QSqlQuery>
#include<QMessageBox>
#include<QSqlError>
AddDoctorsDialog::AddDoctorsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDoctorsDialog)
{
    ui->setupUi(this);
    loadDepartments(); // Загрузка отделений при открытии формы
}

AddDoctorsDialog::~AddDoctorsDialog()
{
    delete ui;
}

void AddDoctorsDialog::loadDepartments()
{
    QSqlQuery query;
    if (!query.exec("SELECT ID_Department, Nazvanie FROM Departments")) {
        QMessageBox::critical(this, "Ошибка", "Ошибка загрузки отделений: " + query.lastError().text());
        return;
    }

    while (query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        ui->departmentComboBox->addItem(name, id); // Сохраняем ID как data для ComboBox
    }
}

void AddDoctorsDialog::on_okButton_clicked()
{
    // Получаем данные из полей
    QString familiya = ui->familiyaLineEdit->text();
    QString imya = ui->imyaLineEdit->text();
    QString otchestvo = ui->otchestvoLineEdit->text();
    QString dolzhnost = ui->dolzhnostLineEdit->text();
    QString nauchnoeZvanie = ui->nauchnoeZvanieLineEdit->text();
    QString adres = ui->adresLineEdit->text();
    int stazh = ui->stazhSpinBox->value();
    int departmentId = ui->departmentComboBox->currentData().toInt();

    if (familiya.isEmpty() || imya.isEmpty() || dolzhnost.isEmpty() || departmentId == 0) {
        QMessageBox::warning(this, "Внимание", "Заполните обязательные поля!");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO Doctors (Familiya, Imya, Otchestvo, Dolzhnost, Stazh_Raboty, Nauchnoe_Zvanie, Adres, ID_Department) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(familiya);
    query.addBindValue(imya);
    query.addBindValue(otchestvo);
    query.addBindValue(dolzhnost);
    query.addBindValue(stazh);
    query.addBindValue(nauchnoeZvanie);
    query.addBindValue(adres);
    query.addBindValue(departmentId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Ошибка добавления врача: " + query.lastError().text());
        return;
    }

    accept(); // Закрываем форму с результатом Accepted
}


void AddDoctorsDialog::on_cancelButton_clicked()
{
    reject();
}

