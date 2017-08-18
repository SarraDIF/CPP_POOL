//
// Created by BlueSocket on 18/08/2017.
//

#ifndef				DAY_06_KOALADOCTORLIST_H
# define			DAY_06_KOALADOCTORLIST_H

# include			<string>
# include			<iostream>

# include			"koaladoctor.h"

class				KoalaDoctorList
{
private:
	KoalaDoctor		*doctor;
	KoalaDoctorList	*next;

public:
	KoalaDoctorList(KoalaDoctor *doctor);
	~KoalaDoctorList();

	bool			isEnd();
	void			dump();
	void			append(KoalaDoctorList *next);
	KoalaDoctor		*getItem();
	KoalaDoctor		*getFromName(std::string name);
	KoalaDoctorList	*remove(KoalaDoctorList *remove);
	KoalaDoctorList	*removeFromName(std::string remove);
};


#endif			//DAY_06_KOALADOCTORLIST_H
