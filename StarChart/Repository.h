#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <Star.h>
class Repository
{
	std::vector<std::pair<std::string, std::string>> astronomers;
	std::vector<Star> stars;
public:
	Repository();
	void loadStars();
	void loadAstronomers();
	std::vector<std::pair<std::string, std::string>> getAstronomers() { return this->astronomers; }
	std::vector<Star>& getStars() { return this->stars; }
	std::vector<Star> sort();
	void save();
	void add(Star s);
	~Repository();
};

