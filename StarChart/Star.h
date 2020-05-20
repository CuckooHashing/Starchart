#pragma once
#include <string>
class Star
{
private:
	std::string name, constelation;
	int RA, Dec, diameter;
public:
	Star(std::string nam, std::string constel, int ra, int dec, int diam);
	std::string getName() { return this->name; }
	std::string getConstelation() { return this->constelation; }
	int getRA() { return this->RA; }
	int getDec() { return this->Dec; }
	int getDiameter() { return this->diameter; }
	Star& operator=(Star& s);
	~Star();
};

