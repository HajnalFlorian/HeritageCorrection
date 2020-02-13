#include "point.h"
#include  <iostream>
using namespace std;

point::point(int x, int y)
{
	this->x = x;
	this->y = y;
}

point::point()
{
	this->x = 0;
	this->y = 0;
}

void point::affichage()
{
	cout << "X: " << this->x << "Y: " << this->y << "\n";
}
