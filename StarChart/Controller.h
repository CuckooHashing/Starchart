#pragma once
#include <vector>
#include <string>
#include <Star.h>
#include "Repository.h"
class Controller
{
	Repository& repo;
public:
	Controller(Repository& r);
	std::vector<Star>& getStars() { return repo.getStars(); }
	std::vector<Star>& someStars(std::string constelation);
	std::vector<std::pair<std::string, std::string>> getAstronomers() { return repo.getAstronomers(); }
	std::vector<Star>& search(std::string nam);
	void addStar(std::string name, std::string contela, int ra, int dec, int diam);
	~Controller();
};

