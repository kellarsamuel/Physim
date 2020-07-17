#pragma once
#include <QPainter>
#include <QWidget>


class drawindow : public QWidget{
    Q_OBJECT

public:
    drawindow(QWidget* parent = 0);
    ~drawindow();

private:
    void paintEvent(QPaintEvent* event);
    void timerEvent(QTimerEvent* event);

    int _pointX;
    int _pointY;
    int _width;
    int _height;
    int _movementX;
    int _movementY;
    
};
