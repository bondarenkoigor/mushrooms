#pragma once
class c_mushroom
{
private:
	int growPercent;
public:
	c_mushroom();
	void grow();
	bool isGrown();
	inline int getpercent()
	{
		return growPercent;
	}
};