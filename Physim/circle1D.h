#pragma once
#include "mveable.h"

class circle1D : public mveable{
	
public:
	circle1D::circle1D(int pX, int pY, int wd, int ht) : mveable(pX, pY, wd, ht) {
		_velX = 10;
		_velY = 0;
	};
	void movecenter();
	void checkbounds(int width, int hieght);
	std::tuple<int, int, int, int> getdrawinfo();


};