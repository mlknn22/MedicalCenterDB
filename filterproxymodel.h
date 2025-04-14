#ifndef FILTERPROXYMODEL_H
#define FILTERPROXYMODEL_H

#include <QSortFilterProxyModel>

class FilterProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT

public:
    explicit FilterProxyModel(QObject *parent = nullptr);

protected:
    // Переопределяем фильтрацию, чтобы она работала по всем столбцам
    bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const override;
};

#endif // FILTERPROXYMODEL_H
