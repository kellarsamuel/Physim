#pragma once
#include "drawindow.h"
#include <QWidget>
#include <QLabel>

class wholewindow : public QWidget {
	
//	Q_OBJECT

public:
	wholewindow();
	~wholewindow();
private:
	QLabel* createLabel(const QString& text);

	QLabel* drawLabel;
	drawindow* draw;

};

