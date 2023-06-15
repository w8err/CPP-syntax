#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << this->radius << " ÀÎ ¿ø" << endl; }

	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return this->radius; }

	friend Circle operator + (int a, Circle c);
};

Circle operator + (int a, Circle c) {
	Circle circle;
	circle.setRadius(a + c.getRadius());
	return circle;
}

int main() {
	Circle a(5);
	Circle b(4);

	b = 1 + a;	// b = 1 + a -> b = a.+(1, a)

	a.show();
	b.show();
}



