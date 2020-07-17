#pragma once
#include "drawindow.h"
#include "collisionwindow.h"
#include <QWidget>
#include <QLabel>

class wholewindow : public QWidget {
	
public:
	wholewindow();
	~wholewindow();

private:
	QLabel* createLabel(const QString& text);

	QLabel* drawLabel;
	drawindow* draw;
	collisionwindow* collis;

};

