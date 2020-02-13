#pragma once
#include "vect.h"
class vectok : public vect
{
public:
	vectok(int dim) : vect(dim) 
	{}
	vectok(vectok&);
	vectok& operator= (vectok&);
	int taille();
	~vectok();
};

