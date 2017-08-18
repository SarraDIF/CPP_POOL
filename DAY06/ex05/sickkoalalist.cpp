//
// Created by BlueSocket on 18/08/2017.
//

#include			"sickkoalalist.h"

SickKoalaList::SickKoalaList(SickKoala* koala)
{
	this->koala = koala;
	this->next = NULL;
}

SickKoalaList::~SickKoalaList()
{
}

SickKoala			*SickKoalaList::getContent()
{
	return (this->koala);
}

SickKoalaList			*SickKoalaList::getNext()
{
	return (this->next);
}

bool				SickKoalaList::isEnd()
{
	return (!(bool) this->next);
}

void				SickKoalaList::append(SickKoalaList* next)
{
	if (this->isEnd())
		this->next = next;
	else
		this->next->append(next);
}

SickKoala			*SickKoalaList::getFromName(std::string name)
{
	if (this->koala && this->koala->getName() == name)
		return (this->koala);
	else if (this->next)
		return (this->next->getFromName(name));
	return (NULL);
}

SickKoalaList		*SickKoalaList::removeFromName(std::string remove)
{
	SickKoalaList	*current = this;
	SickKoalaList	*previous = NULL;

	while (current)
	{
		if (current && current->koala && current->koala->getName() == remove)
		{
			if (previous)
			{
				previous->next = current->next;
				current->next = NULL;
				return (this);
			}
			else
			{
				previous = current->next;
				current->next = NULL;
				return (previous);
			}
		}
		previous = current;
		current = current->next;
	}
	return (NULL);
}

SickKoalaList		*SickKoalaList::remove(SickKoalaList* remove)
{
	this->removeFromName(remove->koala->getName());
}

void				SickKoalaList::dump()
{
	SickKoalaList	*current = this;

	std::cout << "Liste des patients : ";
	while (current)
	{
		if (current->koala)
			std::cout << current->koala->getName();
		else
			std::cout << "NULL";
		if (current->next)
			std::cout << ", ";
		else
			std::cout << "." << std::endl;
		current = current->next;
	}
}

SickKoala			*SickKoalaList::getItem()
{
	return (this->koala);
}