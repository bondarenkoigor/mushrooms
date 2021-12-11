#include "c_mushroom.h"

c_mushroom::c_mushroom()
{
	growPercent = 0;
}

void c_mushroom::grow()
{
	if(growPercent!=100) growPercent += 25;
}

bool c_mushroom::isGrown()
{
	if (growPercent >= 100) return true;
	return false;
}