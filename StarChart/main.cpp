#include "StarChart.h"
#include <QtWidgets/QApplication>
#include "Controller.h"
#include "Repository.h"
#include <vector>
#include <string>
#include "StarModel.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	std::vector<StarChart*> windows;
	Repository r{};
	Controller c{ r };
	std::vector<Star>& s = c.getStars();
	StarModel* m = new StarModel{ s };
	for (auto i : c.getAstronomers())
	{
		StarChart* window = new StarChart{ m, c, i.first, i.second };
		windows.push_back(window);
	}
	for (auto i : windows)
		i->show();
	return a.exec();
}
