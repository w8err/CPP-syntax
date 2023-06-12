// main() �Լ��� ������ �޼��ϵ��� increaseBy() �Լ��� �����϶�.

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r;}
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() {
		cout << "�������� " << radius << "�� ��" << endl;
	}
};

void increaseBy(Circle& a, Circle& b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	int aC, bC;
	cout << "������ 2�� �Է� >> "; cin >> aC >> bC;
	Circle x(aC), y(bC);
	increaseBy(x, y);		// x�� �������� 15�� ���� ����
	x.show();				// "�������� 15�� ��" ���
}

