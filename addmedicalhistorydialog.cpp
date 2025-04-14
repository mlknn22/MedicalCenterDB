#include "addmedicalhistorydialog.h"
#include "ui_addmedicalhistorydialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

AddMedicalHistoryDialog::AddMedicalHistoryDialog(QWidget *parent, const QString &fam, const QString &imya, const QString &otch)
    : QDialog(parent), ui(new Ui::AddMedicalHistoryDialog), fam(fam), imya(imya), otch(otch)
{
    ui->setupUi(this);
    loadDoctors();  // Загружаем врачей в ComboBox
    // Устанавливаем имя пациента в заголовок формы
    this->setWindowTitle("Добавить историю болезни для " + fam + " " + imya + " " + otch);
}

AddMedicalHistoryDialog::~AddMedicalHistoryDialog()
{
    delete ui;
}

void AddMedicalHistoryDialog::on_okButton_clicked()
{
    // Получаем данные из формы
    QString diagnoz = ui->diagnozLineEdit->text();
    QDate dataZabolevaniya = ui->dataZabolevaniyaDateEdit->date();
    QDate dataVylechivaniya = ui->dataVylechivaniyaDateEdit->date();
    QString vidLecheniya = ui->vidLecheniyaComboBox->currentText();

    // Получаем ID выбранного врача из ComboBox
    int idDoctor = ui->doctorComboBox->currentData().toInt();

    // Проверяем, что все обязательные поля заполнены
    if (diagnoz.isEmpty() || vidLecheniya.isEmpty() || idDoctor == -1) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, заполните все обязательные поля!");
        return;
    }

    // Выполняем запрос на получение ID пациента
    QSqlQuery query;
    query.prepare("SELECT ID_Pacient FROM Pacients WHERE Familiya = :fam AND Imya = :imya AND Otchestvo = :otch");
    query.bindValue(":fam", fam);
    query.bindValue(":imya", imya);
    query.bindValue(":otch", otch);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось выполнить запрос для получения ID пациента: " + query.lastError().text());
        return;
    }

    if (!query.next()) {
        QMessageBox::critical(this, "Ошибка", "Пациент не найден в базе данных.");
        return;
    }

    int idPacient = query.value("ID_Pacient").toInt();

    // Преобразуем даты в строковый формат
    QString dataZabolevaniyaStr = dataZabolevaniya.toString("yyyy-MM-dd");
    QString dataVylechivaniyaStr = dataVylechivaniya.toString("yyyy-MM-dd");
    // Теперь вставляем историю болезни
    query.prepare("INSERT INTO MedicalHistory (ID_Pacient, Diagnoz, Data_Zabolevaniya, Data_Vylechivaniya, Vid_Lecheniya, ID_Doctor) "
                  "VALUES (:idPacient, :diagnoz, :dataZabolevaniya, :dataVylechivaniya, :vidLecheniya, :idDoctor)");

    query.bindValue(":idPacient", idPacient);
    query.bindValue(":diagnoz", diagnoz);
    query.bindValue(":dataZabolevaniya", dataZabolevaniyaStr);
    query.bindValue(":dataVylechivaniya", dataVylechivaniyaStr);
    query.bindValue(":vidLecheniya", vidLecheniya);
    query.bindValue(":idDoctor", idDoctor);  // Указываем ID врача

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось добавить историю болезни: " + query.lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "История болезни успешно добавлена!");
        accept();  // Закрываем диалог
    }
}

void AddMedicalHistoryDialog::loadDoctors()
{
    // Загружаем список врачей из базы данных
    QSqlQuery query;
    query.prepare("SELECT ID_Doctor, Familiya FROM Doctors");
    if (query.exec()) {
        while (query.next()) {
            // Добавляем имя врача и его ID в ComboBox
            ui->doctorComboBox->addItem(query.value("Familiya").toString(), query.value("ID_Doctor"));
        }
    } else {
        QMessageBox::critical(this, "Ошибка", "Не удалось загрузить список врачей: " + query.lastError().text());
    }
}

void AddMedicalHistoryDialog::on_cancelButton_clicked()
{
    reject();  // Закрываем форму без добавления
}
