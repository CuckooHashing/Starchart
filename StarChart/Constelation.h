#pragma once

#include <QWidget>
#include "ui_Constelation.h"
#include <QPainter>
#include <vector>
#include <string>

class Constelation : public QWidget
{
	Q_OBJECT
private:
	std::string constelation;
	std::vector<std::vector<int>> coordinates;

public:
	Constelation(std::string constelation, std::vector<std::vector<int>> coord, QWidget *parent = Q_NULLPTR);
	~Constelation();
	virtual void paintEvent(QPaintEvent* event);

private:
	Ui::Constelation ui;
};
