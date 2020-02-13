#pragma once
#include "vect.h"
class vectb : public vect
{private:
	int debut, fin;
public:
	vectb(int , int );
	int& operator [] (int nb);
};

