#pragma once

class vect
{protected:
	int nelem; 
	int* adr;
public:
	vect(int);
	~vect();
	int& operator [] (int nb);
};

