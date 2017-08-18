//
// Created by BlueSocket on 18/08/2017.
//

#ifndef				DAY_06_HOSPITAL_H
# define			DAY_06_HOSPITAL_H

# include			<string>
# include			<iostream>
# include			<sstream>

# include			"sickkoala.h"
# include			"koalanurse.h"
# include			"koaladoctor.h"
# include			"sickkoalalist.h"
# include			"koalanurselist.h"
# include			"koaladoctorlist.h"

class				Hospital
{
private:

	SickKoalaList	*koalas;
	KoalaNurseList	*nurses;
	KoalaDoctorList	*doctors;

	void			action(std::string action);

public:
	Hospital();
	~Hospital();

	void			run();
	void			addSick(SickKoalaList *koala);
	void			addNurse(KoalaNurseList *nurse);
	void			addDoctor(KoalaDoctorList *doctor);
};


#endif				//DAY_06_HOSPITAL_H
