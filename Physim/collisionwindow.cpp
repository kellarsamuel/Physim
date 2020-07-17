#include "collisionwindow.h"
#include <tuple>

collisionwindow::collisionwindow(QWidget* parent) : QWidget(parent){
	for (int i = 0; i < 10; ++i) {
		shapes.push_back(std::make_unique<circle1D>(10, 10, (i + 1) * 2, (i + 1) * 2));
	}
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	startTimer(20);
}

void collisionwindow::paintEvent(QPaintEvent* event){
	Q_UNUSED(event);
	Q_UNUSED(event);
	QPainter painter(this);
	for (auto & i : shapes) {
		auto tu = i->getdrawinfo();
		painter.drawEllipse(QRect(std::get<0>(tu), std::get<1>(tu), std::get<2>(tu), std::get<3>(tu)));
	}
	painter.end();
}

void collisionwindow::timerEvent(QTimerEvent* event){
	for (auto & i : shapes) {
		i->movecenter();
		i->checkbounds(width(), height());
	}
	update();
}

