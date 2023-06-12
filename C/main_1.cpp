#include <iostream>
#include "1.h"

int main() {
    Circle c1(3);
    Circle c2(4);

    std::cout << "원 c1의 radius는 " << c1.getRadius() << ", 원 c2의 radius는 " << c2.getRadius() << std::endl;

    swap(c1, c2);

    std::cout << "swap 함수 실행" << std::endl;
    std::cout << "원 c1의 radius는 " << c1.getRadius() << ", 원 c2의 radius는 " << c2.getRadius() << std::endl;

    return 0;
}