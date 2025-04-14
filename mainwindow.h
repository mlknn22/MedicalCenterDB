#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>

class departmentsdialog;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void connectToDatabase();      // Подключение к базе данных
    void on_exitButton_clicked();  // Обработчик кнопки выхода
    void on_departmentsButton_clicked();  // Обработчик кнопки для открытия диалогового окна с отделениями
    void on_doctorsButton_clicked();      // Обработчик кнопки для открытия диалогового окна с врачами
    void on_pacientsButton_clicked();    // Обработчик кнопки для открытия диалогового окна с пациентами

    void on_infoButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db; // Объект базы данных
};

#endif // MAINWINDOW_H
