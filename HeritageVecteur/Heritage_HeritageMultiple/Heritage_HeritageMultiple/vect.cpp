#include "vect.h"
#include <corecrt_malloc.h>

vect::vect(int a)
{
	
	adr = new int[nelem=a];
	/*
	this->nelem = a;
	//this->adr = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++) {
		this->adr[i] = 0;
	}*/
}

int& vect::operator[](int nI)
{
	if (nI >= 0 && nI < this->nelem)
		return adr[nI];
	else
		return adr[0];
	//return vect::adr[nelem - 1];
}

vect::~vect() 
{
	delete[]adr;
}