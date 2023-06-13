#include <iostream>
using namespace std;

int big(int x, int y, int z = 100) {
	int temp = 0;
	x > y ? temp = x : temp = y;
	if (temp >= z) { return z; }
	else { return temp; }

}

int main() {
	// 3과 5 중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int x = big(3, 5);
	// 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int y = big(300, 60);
	// 30과 60중 큰 값이 최대값 60보다 크므로, 50 리턴
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z << endl;

	int a, b, c;

	cout << "2개의 값 입력 >> "; cin >> a >> b;
	cout << "최대값 입력 >> "; cin >> c;
	int aIN = big(a, b);
	int bIN = big(a, b, c);

	cout << aIN << ' ' << bIN << endl;

}