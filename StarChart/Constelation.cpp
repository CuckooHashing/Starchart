#include "Constelation.h"

Constelation::Constelation(std::string constelation, std::vector<std::vector<int>> coord, QWidget *parent)
	: QWidget(parent), constelation{constelation}, coordinates{coord}
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromStdString(constelation));
}

Constelation::~Constelation()
{
}

void Constelation::paintEvent(QPaintEvent * event)
{
	QPainter starMap{ this };
	starMap.setBrush(Qt::red);
	starMap.setPen(Qt::yellow);
	QPoint p{ coordinates[0][0], coordinates[0][1] };
	starMap.drawEllipse(p, coordinates[0][2], coordinates[0][2]);

	starMap.setBrush(Qt::black);
	starMap.setPen(Qt::darkBlue);
	for (int i = 1; i < coordinates.size(); i++)
	{
		starMap.drawEllipse(QPoint(coordinates[i][0], coordinates[i][1]), coordinates[i][2], coordinates[i][2]);
	}
}
