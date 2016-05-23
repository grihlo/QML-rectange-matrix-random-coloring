#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QtCore>
#include <QtGui>
#include <QTimer>

class DataModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit DataModel(QObject *parent = 0);
    ~DataModel();
    void randomData();

public: // QAbstractItemModel interface
    virtual int rowCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int role) const;
private:
    QList<QString> m_data;
    //QTimer m_timer;
};

#endif // DATAMODEL_H
