//
// Created by BlueSocket on 17/08/2017.
//

#ifndef			DAY_06_KOALADOCTOR_H
# define		DAY_06_KOALADOCTOR_H

# include		<string>
# include		<cstdlib>
# include		<fstream>
# include		<iostream>

# include		"sickkoala.h"

class KoalaDoctor
{
private:
	std::string name;
	bool work;

	void speak(std::string message);

public:
	KoalaDoctor(std::string name);
	~KoalaDoctor();

	std::string getName();
	void diagnose(SickKoala* koala);
	void timeCheck();
};


#endif //DAY_06_KOALADOCTOR_H