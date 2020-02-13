#pragma once
#include "Liste.h"
#include "point.h"
class Liste_points : public Liste , public point
{
public:
	Liste_points();
	void affiche();
};

