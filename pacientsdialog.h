#ifndef PACIENTS_DIALOG_H
#define PACIENTS_DIALOG_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>

namespace Ui {
class pacientsdialog;
}

class pacientsdialog : public QDialog
{
    Q_OBJECT

public:
    explicit pacientsdialog(QWidget *parent = nullptr);
    ~pacientsdialog();

    void loadPacients();  // Метод для загрузки данных

private slots:
    void on_exitButton_clicked();  // Обработчик кнопки выхода
    void on_searchTextChanged(const QString &text);  // Слот для обработки изменений в поле поиска

    void on_medicalHistoryButton_clicked();

    void on_addPacient_clicked();

    void on_addMHButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::pacientsdialog *ui;  // Указатель на интерфейс
    QSqlQueryModel *model;  // Модель для данных
    QSortFilterProxyModel *proxyModel;  // Прокси-модель для фильтрации
};

#endif // PACIENTS_DIALOG_H
