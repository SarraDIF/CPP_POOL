//
// Created by BlueSocket on 17/08/2017.
//

#include			"koalanurse.h"

KoalaNurse::KoalaNurse(int id)
{
	this->id = id;
	this->work = false;
}

KoalaNurse::~KoalaNurse()
{
	this->speak("Enfin un peu de repos !");
}

int					KoalaNurse::getID()
{
	return (this->id);
}

void				KoalaNurse::speak(std::string message)
{
	std::cout << "Nurse " << this->id << ": " << message << std::endl;
}

void				KoalaNurse::giveDrug(std::string drug, SickKoala* koala)
{
	koala->takeDrug(drug);
}

std::string			KoalaNurse::readReport(std::string report)
{
	int				pos = report.find(".report");
	std::string		drug;
	std::string		koala("");
	std::fstream	file(report.data(), std::ios::in);

	if (pos != std::string::npos && file.is_open())
	{
		std::getline(file, drug);
		koala = report.substr(0, pos);
		this->speak(std::string("Kreog ! Il faut donner un ") + drug + " a Mr." + koala + " !");
	}
	file.close();
	return (drug);
}

void KoalaNurse::timeCheck()
{
	if (this->work)
	{
		this->speak("Je rentre dans ma foret d'eucalyptus !");
	}
	else
	{
		this->speak("Je commence le travail !");
	}
	this->work = !this->work;
}
