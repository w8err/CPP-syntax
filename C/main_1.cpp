#include <iostream>
#include "1.h"

int main() {
    Circle c1(3);
    Circle c2(4);

    std::cout << "�� c1�� radius�� " << c1.getRadius() << ", �� c2�� radius�� " << c2.getRadius() << std::endl;

    swap(c1, c2);

    std::cout << "swap �Լ� ����" << std::endl;
    std::cout << "�� c1�� radius�� " << c1.getRadius() << ", �� c2�� radius�� " << c2.getRadius() << std::endl;

    return 0;
}