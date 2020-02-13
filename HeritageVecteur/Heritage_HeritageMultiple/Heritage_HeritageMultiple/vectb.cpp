#include "vectb.h"

vectb::vectb(int i, int j) : vect(j-i+1)
{
	debut = i;
	fin = j;
}

int& vectb::operator[](int nb)
{
	return vect::operator[](nb - debut);
	
}
