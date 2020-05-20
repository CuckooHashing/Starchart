#include "Controller.h"



Controller::Controller(Repository& r): repo{r}
{
}


std::vector<Star>& Controller::someStars(std::string constelation)
{
	std::vector<Star> result;
	for (auto i : repo.getStars())
	{
		if (i.getConstelation() == constelation)
			result.push_back(i);
	}
	return result;
}

std::vector<Star>& Controller::search(std::string nam)
{
	std::vector<Star> result;
	for (auto i : repo.getStars())
	{
		if (strstr(i.getConstelation().c_str(), nam.c_str()) >= 0 || strstr(i.getName().c_str(), nam.c_str()) >= 0)
			result.push_back(i);
	}
	return result;
}

void Controller::addStar(std::string name, std::string constela, int ra, int dec, int diam)
{
	if (name == "")
		return;

	for (auto i : repo.getStars())
		if (i.getName() == name)
			return;

	repo.add(Star(name, constela, ra, dec, diam));
}

Controller::~Controller()
{
}
