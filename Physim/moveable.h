#pragma once

class moveable {

public:
	moveable();
	~moveable();
	virtual void movecenter() = 0;

private:
	int _width;
	int _height;
	int _posX;
	int _posY;
	float _velX;
	float _velY;
};