#pragma once
#include <QAbstractTableModel>
#include <vector>
#include <string>
#include "Star.h"
#include "Repository.h"
class StarModel :
	public QAbstractTableModel
{
private:
	std::vector<Star>& stars;
public:
	StarModel(std::vector<Star>& s);
	Qt::ItemFlags flags(const QModelIndex &index) const;
	int rowCount(const QModelIndex &parent = QModelIndex()) const;
	int columnCount(const QModelIndex &parent = QModelIndex()) const;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
	~StarModel();
};

