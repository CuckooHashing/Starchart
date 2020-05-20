#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StarChart.h"
#include <string>
#include "Controller.h"
#include <QAbstractTableModel>
#include "StarModel.h"
#include <QPainter>
#include "Constelation.h"

class StarChart : public QMainWindow
{
	Q_OBJECT

private:
	std::string name, constelation;
	Controller& ctrl;
	StarModel* model, *m, *searched;

public:
	StarChart(StarModel* model, Controller& c, std::string name, std::string constela, QWidget *parent = Q_NULLPTR);
private:
	Ui::StarChartClass ui;

private slots:
	void addTrigger();
	void checkTrigger();
	void searchTrigger();
	void viewTrigger();
};
