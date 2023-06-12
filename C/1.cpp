#include "1.h"

Circle::Circle() {}
Circle::Circle(int radius) {
    this->radius = radius;
}
double Circle::getRadius() {
    return radius * 3.14 * 3.14;
}

void swap(Circle& c1, Circle& c2) {
    Circle temp = c1;
    c1 = c2;
    c2 = temp;
}