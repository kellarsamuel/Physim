#include "wholewindow.h"
#include <QGridLayout>

wholewindow::wholewindow() {
	QGridLayout* layout = new QGridLayout;
	drawLabel = createLabel(tr("Draw Window"));
	draw = new drawindow;
	collis = new collisionwindow;
	layout->addWidget(drawLabel, 0, 1);
	layout->addWidget(draw, 0, 2);
	layout->addWidget(collis, 1, 0);
	setWindowTitle(tr("Physics Simualtion"));
	
	setLayout(layout);
}

wholewindow::~wholewindow(){
}

QLabel* wholewindow::createLabel(const QString& text) {
	QLabel* label = new QLabel(text);
	label->setAlignment(Qt::AlignCenter);
	label->setFrameStyle(QFrame::Box | QFrame::Sunken);
	return label;
}
