#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "departmentsdialog.h"  // Подключаем заголовочный файл диалогового окна
#include "doctorsdialog.h"
#include "pacientsdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectToDatabase();  // Подключение к базе данных при запуске
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);

}

void MainWindow::connectToDatabase() {
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={SQL Server};Server=LAPTOP-D27PR08Q\\SQLEXPRESS;Database=MedicalCenterDB;");
    db.setUserName(""); // Использование Windows-аутентификации
    db.setPassword(""); // Оставляем пустым

    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка подключения", db.lastError().text());
        return;
    } else {
        QMessageBox::information(nullptr, "Успешное подключение", "База данных успешно подключена!");
    }
}

void MainWindow::on_departmentsButton_clicked() {
    // Создаем и показываем диалоговое окно
    departmentsdialog dialog(this);  // Локальный объект
    dialog.exec();  // Открываем как модальное окно
}


void MainWindow::on_doctorsButton_clicked() {
    doctorsdialog dialog(this);  // Создаем диалоговое окно для врачей
    dialog.exec();  // Открываем его как модальное окно
}

void MainWindow::on_pacientsButton_clicked() {
    pacientsdialog dialog(this);  // Создаем диалоговое окно для пациентов
    dialog.exec();  // Открываем его как модальное окно
}


void MainWindow::on_exitButton_clicked() {
    QApplication::quit();  // Завершаем приложение
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_infoButton_clicked() {
    QMessageBox::information(this, "Информационная система больницы",
                             "Это информационная система для управления больницей. Она включает разделы для работы с отделениями, врачами, пациентами, их историями болезней и листами лечения.");
}


