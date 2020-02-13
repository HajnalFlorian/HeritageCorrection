#include <stdlib.h>
#include <stdio.h>
#include "Liste_points.h"
#include "point.h"
using namespace std;


int main()
{
	point a(2,4);
	point b(7,3);
	point c(9,1);
	Liste_points maListe;
	maListe.ajoute(&a);
	maListe.affiche();
	maListe.ajoute(&b);
	maListe.ajoute(&c);
	maListe.affiche();
}