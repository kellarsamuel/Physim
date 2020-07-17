#pragma once
#include <tuple>

class mveable {

public:
	mveable(int pX, int pY, int wd, int ht) : _posX(pX), _posY(pY), _width(wd), _height(ht) {};
	virtual void movecenter() = 0;
	virtual void checkbounds(int width, int hieght) = 0;
	virtual std::tuple<int,int,int,int> getdrawinfo() = 0;

protected:
	const int _width;
	const int _height;
	int _posX;
	int _posY;
	float _velX;
	float _velY;
};