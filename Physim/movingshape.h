#pragma once
#include <Qpainter>
#include <QWidget>


class movingShape : public QWidget {

public:	
	movingShape(QWidget* parent = 0);
	~movingShape();

protected:
	void paintEvent(QPaintEvent* event);

private:
	int _pointX;
	int _pointY;
	int _width;
	int _height;
};