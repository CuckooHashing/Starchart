#include "Star.h"



Star::Star(std::string nam, std::string constel, int ra, int dec, int diam):name{nam}, constelation{constel}, RA{ra}, Dec{dec}, diameter{diam}
{
}


Star & Star::operator=(Star & s)
{
	this->name = s.getName();
	this->constelation = s.getConstelation();
	this->RA = s.getRA();
	this->Dec = s.getDec();
	this->diameter = s.getDiameter();
	return *this;
}

Star::~Star()
{
}
