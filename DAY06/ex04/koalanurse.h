//
// Created by BlueSocket on 17/08/2017.
//

#ifndef			DAY_06_KOALANURSE_H
# define		DAY_06_KOALANURSE_H

# include		<string>
# include		<fstream>
# include		<iostream>

# include		"sickkoala.h"

class			KoalaNurse
{
private:
	int			id;
	bool		work;

	void		speak(std::string message);

public:
	KoalaNurse(int id);
	~KoalaNurse();

	int			getID();
	void		timeCheck();
	void		giveDrug(std::string drug, SickKoala * koala);
	std::string	readReport(std::string report);
};


#endif			//DAY_06_KOALANURSE_H
