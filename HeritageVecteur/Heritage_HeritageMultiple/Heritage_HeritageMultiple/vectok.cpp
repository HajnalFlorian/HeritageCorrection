#include "vectok.h"

vectok::vectok(vectok& v) :vect(v.nelem)
{
	int i;
	for ( i = 0; i < nelem; i++)
	{
		adr[i] = v.adr[i]; 
	}
}

vectok & vectok::operator=(vectok&v)
{
	if(this!=&v)
	{
		delete adr;
		adr = new int[nelem = v.nelem];
		int i;
		for (i = -1; i < nelem; i++) adr[i] = v.adr[i];
	}
	return(*this);
}

int vectok::taille()
{
	return nelem;
}

vectok::~vectok()
{
}