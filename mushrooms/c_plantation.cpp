#include "c_plantation.h"
#include<iostream>
c_plantation::c_plantation()
{
	mushrooms = nullptr;
	size = 0;
	mushrooms_collected = 0;
}

void c_plantation::add(c_mushroom* new_mushroom)
{
	c_mushroom** new_arr = new c_mushroom * [size + 1];
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = mushrooms[i];
	}
	new_arr[size] = new_mushroom;
	delete mushrooms;
	mushrooms = new_arr;
	size++;
}

void c_plantation::delete_mushroom(int pos)
{
	c_mushroom** new_arr = new c_mushroom * [size - 1];
	for (int i = 0; i < pos && i < size; i++)
	{
		new_arr[i] = mushrooms[i];
	}
	for (int i = pos + 1; i < size; i++)
	{
		new_arr[i - 1] = mushrooms[i];
	}
	delete[](mushrooms);
	mushrooms = new_arr;
	size--;
}

void c_plantation::grow()
{
	for (int i = 0; i < size; i++)
	{
		mushrooms[i]->grow();
	}
}

void c_plantation::collect()
{
	for (int i = 0; i < size; i++)
	{
		if (mushrooms[i]->isGrown())
		{
			delete_mushroom(i);
			mushrooms_collected++;
			i--;
		}
	}
}

void c_plantation::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << " гриб:" << mushrooms[i]->getpercent() << "%\n";
	}
	std::cout << "Всего грибов собрано: " << mushrooms_collected << "\n";
}
