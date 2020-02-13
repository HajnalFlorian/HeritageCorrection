#include "Liste.h"

Liste::Liste()
{
	debut = NULL;
	courant = debut;

}

Liste::~Liste()
{
	element* suite;
	courant = debut;
	while (courant != NULL)
	{
		suite = courant->suivant;
		delete courant;
		courant = suite;

	}
}

void Liste::ajoute(void * ajout)
{
	element* add = new element;
	add->suivant = debut;
	add->contenu = ajout;
	debut = add;

	
}

void* Liste::premier()
{
	this->courant = this->debut;
	if (courant != NULL)
	{
		return (courant->contenu);
	}
	else
		return NULL;
}

void* Liste::prochain()
{
	if (courant != NULL)
	{
		courant = courant->suivant;
		if (courant!=NULL)
		{
			return (courant->contenu);
		}
	}
	else {
		return NULL;
	}
		
}

int Liste::fin()
{
	return (courant == NULL);
}


