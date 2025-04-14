#include "filterproxymodel.h"

FilterProxyModel::FilterProxyModel(QObject *parent) :
    QSortFilterProxyModel(parent)
{
}

bool FilterProxyModel::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const {
    // Получаем фильтрующий текст
    QString filter = filterRegularExpression().pattern();  // Используем filterRegularExpression()

    // Проверяем все столбцы для соответствия фильтру
    for (int column = 0; column < sourceModel()->columnCount(sourceParent); ++column) {
        QModelIndex index = sourceModel()->index(sourceRow, column, sourceParent);
        if (sourceModel()->data(index).toString().contains(filter, Qt::CaseInsensitive)) {
            return true;
        }
    }

    return false;
}
