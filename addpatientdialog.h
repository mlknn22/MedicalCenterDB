#ifndef ADDPATIENTDIALOG_H
#define ADDPATIENTDIALOG_H

#include <QDialog>

namespace Ui {
class addpatientdialog;
}

class addpatientdialog : public QDialog
{
    Q_OBJECT

public:
    explicit addpatientdialog(QWidget *parent = nullptr);
    ~addpatientdialog();

private slots:

    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::addpatientdialog *ui;
};

#endif // ADDPATIENTDIALOG_H
