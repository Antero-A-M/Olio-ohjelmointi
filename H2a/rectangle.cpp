#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width(0.0), height(0.0) {}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setHeight(double h) {
    height = h;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}
