#include <QPainter>
#include <QWidget>
#include <vector>
#include "circle1D.h"
#include <memory>

class collisionwindow : public QWidget {

    Q_OBJECT

public:
    collisionwindow(QWidget* parent = 0);

private:
    std::vector<std::unique_ptr<mveable>> shapes;
    void paintEvent(QPaintEvent* event);
    void timerEvent(QTimerEvent* event);


};