#include "drawindow.h"

drawindow::drawindow(QWidget* parent) : QWidget(parent) {
    _pointX = 100;
    _pointY = 100;
    _width = 100;
    _height = 100;
    _movementX = 1;
    _movementY = 1;
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    startTimer(10);
}


drawindow::~drawindow()
{

}

void drawindow::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QRectF rect(_pointX, _pointY, _width, _height);
    painter.drawEllipse(rect);
    painter.end();
}

void drawindow::timerEvent(QTimerEvent* event){
    _pointX += _movementX;
    _pointY += _movementY;
    if (_pointX + _width > width() || _pointX< 0) {
        _movementX *= -1;
    }
    if (_pointY + _height  > height() || _pointY  < 0) {
        _movementY *= -1;
    }
    update();
}
