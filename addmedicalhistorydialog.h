#ifndef ADDMEDICALHISTORYDIALOG_H
#define ADDMEDICALHISTORYDIALOG_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class AddMedicalHistoryDialog;
}

class AddMedicalHistoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddMedicalHistoryDialog(QWidget *parent = nullptr, const QString &fam = "", const QString &imya = "", const QString &otch = "");
    ~AddMedicalHistoryDialog();

private slots:
    void on_okButton_clicked();  // Обработчик кнопки "ОК"
    void on_cancelButton_clicked();  // Обработчик кнопки "Отмена"

private:
    Ui::AddMedicalHistoryDialog *ui;
    QString fam, imya, otch;  // Данные пациента
    void loadDoctors();  // Добавьте объявление этой функции

};

#endif // ADDMEDICALHISTORYDIALOG_H
