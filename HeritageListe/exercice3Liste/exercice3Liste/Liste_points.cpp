#include "Liste_points.h"


Liste_points::Liste_points()
{


}

void Liste_points::affiche()
{
	point* ptr = (point*)premier();
	while (fin()!=1)
	{
		ptr->affichage();
		ptr = (point*)prochain();
	}
}
