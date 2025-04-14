#include "mainwindow.h"
#include <QStyleFactory>
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Устанавливаем светлую тему
    QApplication::setStyle(QStyleFactory::create("Fusion"));

    // Настройка светлой темы для Fusion
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(255, 255, 255)); // Белый фон окна
    palette.setColor(QPalette::WindowText, QColor(0, 0, 0));   // Черный текст
    palette.setColor(QPalette::Base, QColor(255, 255, 255));   // Белый фон для полей ввода (QLineEdit, QTextEdit)
    palette.setColor(QPalette::AlternateBase, QColor(240, 240, 240)); // Для чередующихся строк в таблицах (например, QTableView)
    palette.setColor(QPalette::Button, QColor(240, 240, 240)); // Светлый фон для кнопок
    palette.setColor(QPalette::ButtonText, QColor(0, 0, 0));   // Черный текст на кнопках
    palette.setColor(QPalette::Text, QColor(0, 0, 0));        // Черный текст в полях ввода
    palette.setColor(QPalette::Highlight, QColor(0, 120, 215)); // Цвет выделения
    palette.setColor(QPalette::HighlightedText, QColor(255, 255, 255)); // Белый текст при выделении
    palette.setColor(QPalette::Link, QColor(0, 0, 255));      // Синие ссылки

    QApplication::setPalette(palette);

    MainWindow w;

    // Устанавливаем иконку приложения
    w.setWindowIcon(QIcon(":/new/prefix1/mcIcon.png"));  // Используем путь из .qrc файла

    w.show();
    return a.exec();
}
