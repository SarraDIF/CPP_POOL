//
// Created by BlueSocket on 17/08/2017.
//

#ifndef				DAY_06_KOALANURSELIST_HPP
# define			DAY_06_KOALANURSELIST_HPP

# include			<string>
# include			<iostream>

# include			"koalanurse.h"

class				KoalaNurseList
{
private:
	KoalaNurse*		nurse;
	KoalaNurseList	*next;

public:
	KoalaNurseList(KoalaNurse *koala);
	~KoalaNurseList();

	bool			isEnd();
	void			dump();
	void			append(KoalaNurseList *next);
	KoalaNurse		*getItem();
	KoalaNurse		*getFromID(int id);
	KoalaNurseList	*remove(KoalaNurseList *remove);
	KoalaNurseList	*removeFromID(int remove);
};

#endif				//DAY_06_KOALANURSELIST_HPP
