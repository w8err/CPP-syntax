#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int radius);
    double getRadius();
};

void swap(Circle& c1, Circle& c2);

#endif