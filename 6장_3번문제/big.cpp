#include <iostream>
using namespace std;

int big(int x, int y, int z = 100) {
	int temp = 0;
	x > y ? temp = x : temp = y;
	if (temp >= z) { return z; }
	else { return temp; }

}

int main() {
	// 3�� 5 �� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
	int x = big(3, 5);
	// 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
	int y = big(300, 60);
	// 30�� 60�� ū ���� �ִ밪 60���� ũ�Ƿ�, 50 ����
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z << endl;

	int a, b, c;

	cout << "2���� �� �Է� >> "; cin >> a >> b;
	cout << "�ִ밪 �Է� >> "; cin >> c;
	int aIN = big(a, b);
	int bIN = big(a, b, c);

	cout << aIN << ' ' << bIN << endl;

}