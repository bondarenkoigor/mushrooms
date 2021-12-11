#pragma once
#include"c_mushroom.h"
class c_plantation
{
private:
	c_mushroom** mushrooms;
	int size;
	int mushrooms_collected;
	void delete_mushroom(int pos);
public:
	c_plantation();
	void add(c_mushroom* new_mushroom);
	void grow();
	void collect();
	void print();
};

