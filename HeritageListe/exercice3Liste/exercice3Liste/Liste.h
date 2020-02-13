#pragma once
#include <stdlib.h>
struct element
{
	element* suivant;
	void* contenu;
};
class Liste
{protected:
	element* debut;
	element* courant;
public:
	Liste();
	~Liste();
	void ajoute(void*);
	void* premier();
	void* prochain();
	int fin();
};

