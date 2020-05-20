#include "StarModel.h"



StarModel::StarModel( std::vector<Star>& s): stars{s}
{
}

Qt::ItemFlags StarModel::flags(const QModelIndex & index) const
{
	return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}

int StarModel::rowCount(const QModelIndex & parent) const
{
	return stars.size();
}

int StarModel::columnCount(const QModelIndex & parent) const
{
	return 5;
}

QVariant StarModel::data(const QModelIndex & index, int role) const
{
	int row = index.row();
	int column = index.column();
	Star antares = stars[row];
	if (role == Qt::DisplayRole)
	{
		switch (column)
		{
		case 0:
			return QString::fromStdString(antares.getName());
		case 1:
			return QString::fromStdString(antares.getConstelation());
		case 2:
			return QString::number(antares.getRA());
		case 3:
			return QString::number(antares.getDec());
		case 4:
			return QString::number(antares.getDiameter());
		default:
			break;
		}
	}
	return QVariant();
}

QVariant StarModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (orientation == Qt::Horizontal&& role == Qt::DisplayRole)
	{
		switch (section)
		{
		case 0:
			return "Name";
		case 1:
			return "Constelation";
		case 2:
			return "Right Ascention";
		case 3:
			return "Declination";
		case 4:
			return "Diameter";
		default:
			break;
		}
	}
	return QVariant();
}


StarModel::~StarModel()
{
}
