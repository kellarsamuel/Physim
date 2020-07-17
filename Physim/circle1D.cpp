#include "circle1D.h"

void circle1D::movecenter() {
    _posX += _velX;
    _posY += _velY;
}

void circle1D::checkbounds(int width, int height) {
    if (_posX + _width > width || _posX < 0) {
        _velX *= -1;
    }
    if (_posY + _height > height || _posY < 0) {
        _velY *= -1;
    }
}

std::tuple<int, int, int, int> circle1D::getdrawinfo()
{
    auto drawinfo = std::make_tuple(_posX, _posY, _width, _height);
    return drawinfo;
}
