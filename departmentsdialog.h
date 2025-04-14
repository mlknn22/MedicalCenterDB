#ifndef DEPARTMENTS_DIALOG_H
#define DEPARTMENTS_DIALOG_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel> // Для фильтрации данных

namespace Ui {
class departmentsdialog;
}

class departmentsdialog : public QDialog
{
    Q_OBJECT

public:
    explicit departmentsdialog(QWidget *parent = nullptr);
    ~departmentsdialog();

    void loadDepartments(); // Метод для загрузки данных

private slots:
    void on_exitButton_clicked();  // Обработчик кнопки выхода
    void on_searchTextChanged(const QString &text);  // Слот для обработки изменений в поле поиска
    void on_departmentDoubleClicked(const QModelIndex &index);
private:
    Ui::departmentsdialog *ui;  // Указатель на интерфейс, сгенерированный Qt Designer
    QSqlQueryModel *model;      // Модель для данных
    QSortFilterProxyModel *proxyModel;  // Прокси-модель для фильтрации
};

#endif // DEPARTMENTS_DIALOG_H
