#include "StarChart.h"


StarChart::StarChart(StarModel* model, Controller& c, std::string name, std::string constela, QWidget *parent)
	: QMainWindow(parent), ctrl{c}, name{name}, constelation{constela}, model{model}
{
	ui.setupUi(this);
	this->ui.starList->setModel(this->model);
	QObject::connect(this->ui.addButton, &QPushButton::clicked, this, &StarChart::addTrigger);
	QObject::connect(this->ui.constelationCheck, &QCheckBox::clicked, this, &StarChart::checkTrigger);
	QObject::connect(this->ui.searchBar, &QLineEdit::textChanged, this, &StarChart::searchTrigger);
	QObject::connect(this->ui.viewButton, &QPushButton::clicked, this, &StarChart::viewTrigger);
	std::vector<Star> s = ctrl.getStars();
	/*searched = new StarModel{ s };
	std::vector<Star> stars = ctrl.search(this->constelation);
	m = new StarModel{ stars };*/
	this->ui.starList->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void StarChart::addTrigger()
{
	ctrl.addStar(this->ui.constelationBar->text().toStdString(), this->constelation, this->ui.RABar->text().toInt(), this->ui.decBar->text().toInt(), this->ui.diameterBar->text().toInt());
}


void StarChart::checkTrigger()
{
	if (this->ui.constelationCheck->isChecked())
	{
		for (int i = 0; i < ctrl.getStars().size(); i++)
		{
			if (ctrl.getStars()[i].getConstelation() != constelation)
				this->ui.starList->hideRow(i);
		}
	}
	else
		for (int i = 0; i < ctrl.getStars().size(); i++)
		{
			if (this->ui.starList->isRowHidden(i))
				this->ui.starList->showRow(i);
		}
}

void StarChart::searchTrigger()
{
	if (this->ui.searchBar->text().toStdString() == "")
	{
		for (int i = 0; i < ctrl.getStars().size(); i++)
		{
			if (this->ui.starList->isRowHidden(i))
				this->ui.starList->showRow(i);
		}
		return;
	}
	//delete this->searched;
	//std::vector<Star> s = ctrl.search(this->ui.searchBar->text().toStdString());
	//this->searched = new StarModel{ s };
	std::string nam = this->ui.searchBar->text().toStdString();
	for (int i = 0; i < ctrl.getStars().size(); i++)
	{
		if (strstr(ctrl.getStars()[i].getConstelation().c_str(), nam.c_str()) == 0 && strstr(ctrl.getStars()[i].getName().c_str(), nam.c_str()) == 0)
			this->ui.starList->hideRow(i);
	}
}

void StarChart::viewTrigger()
{
	std::string which = this->ui.starList->selectionModel()->selection().indexes()[0].data().toString().toStdString();
	if (ctrl.getStars().size() <= 0)
		return;
	Star selected = ctrl.getStars()[0];
	for (auto i : ctrl.getStars())
		if (strstr(which.c_str(), i.getName().c_str()) != 0)
		{
			selected = i;
			break;
		}
	std::string constela = selected.getConstelation();
	std::vector<std::vector<int>> coords;
	std::vector<int> first;
	first.push_back(selected.getRA()*10);
	first.push_back(selected.getDec()*10);
	int dia = selected.getDiameter();
	while (dia > 10)
		dia /= 10;
	first.push_back(dia);
	coords.push_back(first);
	for (auto i : ctrl.getStars())
	{
		if (i.getConstelation() == selected.getConstelation() && i.getName() != selected.getName())
		{
			std::vector<int> aux;
			aux.push_back(i.getRA()*10);
			aux.push_back(i.getDec()*10);
			int diam = i.getDiameter();
			while (diam > 10)
				diam /= 10;
			aux.push_back(diam);
			coords.push_back(aux);
		}
	}
	Constelation* map = new Constelation{ constela, coords };
	map->show();
}

