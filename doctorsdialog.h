#ifndef DOCTORS_DIALOG_H
#define DOCTORS_DIALOG_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>

namespace Ui {
class doctorsdialog;
}

class doctorsdialog : public QDialog
{
    Q_OBJECT

public:
    explicit doctorsdialog(QWidget *parent = nullptr);
    ~doctorsdialog();
     void loadDoctors();  // Метод для загрузки данных

private slots:
    void on_exitButton_clicked();  // Обработчик кнопки выхода
    void on_searchTextChanged(const QString &text);  // Слот для обработки изменений в поле поиска
    void on_deleteButton_clicked();


    void on_addDoctor_clicked();

private:
    Ui::doctorsdialog *ui;  // Указатель на интерфейс
    QSqlQueryModel *model;  // Модель для данных
    QSortFilterProxyModel *proxyModel;  // Прокси-модель для фильтрации


};

#endif // DOCTORS_DIALOG_H
