// main() 함수의 목적을 달성하도록 increaseBy() 함수를 수정하라.

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r;}
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() {
		cout << "반지름이 " << radius << "인 원" << endl;
	}
};

void increaseBy(Circle& a, Circle& b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	int aC, bC;
	cout << "반지름 2개 입력 >> "; cin >> aC >> bC;
	Circle x(aC), y(bC);
	increaseBy(x, y);		// x의 반지름이 15인 원을 생성
	x.show();				// "반지름이 15인 원" 출력
}

