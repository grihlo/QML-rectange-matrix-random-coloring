#include "datamodel.h"
#include <time.h>

DataModel::DataModel(QObject *parent)
    : QAbstractListModel(parent)
{
    randomData();
}

DataModel::~DataModel()
{
}

void DataModel::randomData()
{
    srand(time(0));
    for(int i=0; i < 25; i++)
    {
        int varR = rand() % 5;
        if(varR == 0)
            m_data << "red";
        if(varR == 1)
            m_data << "blue";
        if(varR == 2)
            m_data << "green";
        if(varR == 3)
            m_data << "yellow";
        if(varR == 4)
            m_data << "orange";
    }
}

int DataModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant DataModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();

    if(row < 0 || row >= m_data.count()) {
        return QVariant();
    }

    switch(role) {
        case Qt::DisplayRole:
            return m_data.value(row);
    }

    return QVariant();
}

