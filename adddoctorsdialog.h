#ifndef ADDDOCTORSDIALOG_H
#define ADDDOCTORSDIALOG_H

#include <QDialog>

namespace Ui {
class AddDoctorsDialog;
}

class AddDoctorsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDoctorsDialog(QWidget *parent = nullptr);
    ~AddDoctorsDialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::AddDoctorsDialog *ui;
      void loadDepartments(); // Загрузка списка отделений
};

#endif // ADDDOCTORSDIALOG_H
