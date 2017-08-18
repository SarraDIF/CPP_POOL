//
// Created by BlueSocket on 18/08/2017.
//

#ifndef				DAY_06_SICKKOALALIST_H
# define			DAY_06_SICKKOALALIST_H

# include			<string>
# include			<iostream>

# include			"sickkoala.h"

class				SickKoalaList
{
private:
	SickKoala		*koala;
	SickKoalaList	*next;

public:
	SickKoalaList(SickKoala *koala);
	~SickKoalaList();

	bool			isEnd();
	void			dump();
	void			append(SickKoalaList *next);

	SickKoala		*getItem();
	SickKoala		*getFromName(std::string name);
	SickKoalaList	*remove(SickKoalaList *remove);
	SickKoalaList	*removeFromName(std::string remove);

	SickKoala *getContent();

	SickKoalaList *getNext();
};


#endif			//DAY_06_SICKKOALALIST_H