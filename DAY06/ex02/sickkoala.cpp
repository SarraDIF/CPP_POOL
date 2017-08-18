//
// Created by BlueSocket on 17/08/2017.
//

#include		"sickkoala.h"

SickKoala::SickKoala(std::string name)
{
	this->name = name;
}

SickKoala::~SickKoala()
{
	this->speak("Kreooogg !! Je suis gueriiii !'");
}

std::string		SickKoala::getName()
{
	return this->name;
}

std::string		SickKoala::stringToUpper(std::string s)
{
	std::string cpy;
	std::string::iterator it;

	for (it = s.begin(); it < s.end(); it++)
	{
		cpy.push_back(toupper(*it));
	}
	return (cpy);
}

void			SickKoala::speak(std::string message)
{
	std::cout << "Mr." << this->name << ": " << message << std::endl;
}

void			SickKoala::poke()
{
	this->speak("Gooeeeeerrk !! :'(");
}

bool			SickKoala::takeDrug(std::string drug)
{
	if (drug.length() == 4 && this->stringToUpper(drug).find("MARS") != std::string::npos)
	{
		this->speak("Mars, et ca Kreog !");
	}
	else if (drug == "Buronzand")
	{
		this->speak("Et la fatigue a fait son temps !");
	}
	else
	{
		this->speak("Goerkreog !");
		return (false);
	}
	return (true);
}

void			SickKoala::overDrive(std::string message)
{
	int			pos;

	while ((pos = message.find("Kreog!")) != std::string::npos)
	{
		message.replace(pos, 6, "1337!", 0, 6);
	}
	this->speak(message);
}
