#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원 " << endl; }
	// ++a 오퍼레이터
	void operator++() {
		this->radius++;
	}


	// b = a++ 오퍼레이터
	Circle operator++(int a) {
		Circle circle = *this;
		this->radius++;
		return circle;
	}
};

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}
