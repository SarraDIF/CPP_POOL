//
// Created by BlueSocket on 17/08/2017.
//

#ifndef			DAY_06_SICKKOALA_H
# define		DAY_06_SICKKOALA_H

# include		<string>
# include		<iostream>

class			SickKoala
{
private:
	std::string	name;
	std::string	stringToUpper(std::string s);
	void		speak(std::string message);

public:
	SickKoala(std::string name);
	~SickKoala();

	std::string	getName();
	void		poke();
	bool		takeDrug(std::string drug);
	void		overDrive(std::string message);
};

#endif			//DAY_06_SICKKOALA_H
