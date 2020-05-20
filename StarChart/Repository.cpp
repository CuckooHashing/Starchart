#include "Repository.h"



Repository::Repository()
{
	this->loadStars();
	this->loadAstronomers();
	this->save();
}

void Repository::loadStars()
{
	std::ifstream fin("stars.txt");
	if (fin.is_open())
	{
		std::string line;
		while (getline(fin, line))
		{
			int count = 0;
			std::string name = line.substr(count, line.find(";") - count);
			count += name.size() + 1;
			line[line.find(";")] = ' ';

			std::string constela = line.substr(count, line.find(";") - count);
			count += constela.size() + 1;
			line[line.find(";")] = ' ';

			std::string ra = line.substr(count, line.find(";") - count);
			count += ra.size() + 1;
			line[line.find(";")] = ' ';

			std::string dec = line.substr(count, line.find(";") - count);
			count += dec.size() + 1;
			line[line.find(";")] = ' ';

			std::string diam = line.substr(count, line.find(";") - count);
			count += diam.size() + 1;
			line[line.find(";")] = ' ';

			this->stars.push_back(Star(name, constela, stoi(ra), stoi(dec), stoi(diam)));
		}
	}
	fin.close();
}


void Repository::loadAstronomers()
{
	std::ifstream fin("astronomers.txt");
	if (fin.is_open())
	{
		std::string line;
		while (getline(fin, line))
		{
			int count = 0;
			std::string name = line.substr(count, line.find(";") - count);
			count += name.size() + 1;
			line[line.find(";")] = ' ';

			std::string constela = line.substr(count, line.find(";") - count);
			count += constela.size() + 1;
			line[line.find(";")] = ' ';

			this->astronomers.push_back(std::pair<std::string, std::string>(name, constela));
		}
	}
	fin.close();
}

std::vector<Star>Repository::sort()
{
	std::vector<Star> result = this->stars;
	for (auto i : result)
	{
		for (auto j : result)
		{
			if (i.getConstelation() > j.getConstelation())
			{
				Star aux = i;
				i = j;
				j = aux;
			}
		}
	}
	return result;
}

void Repository::save()
{
	std::vector<Star> result = this->sort();
	std::ofstream fout("stars.txt");
	for (auto i : result)
	{
		fout << i.getName() << ";" << i.getConstelation() << ";" << i.getRA() << ";" << i.getDec() << ";" << i.getDiameter() << ";\n";
	}
	fout.close();
}

void Repository::add(Star s)
{
	this->stars.push_back(s);
	this->save();
}

Repository::~Repository()
{
	this->save();
}
