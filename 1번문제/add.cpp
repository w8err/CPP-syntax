#include <iostream>
using namespace std;

int add(int a[], int size, int b[] = NULL) {		// int b[] => 값이 없으면 NULL로 처리

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];								// a의 모든 값을 sum에 더함
	}
	if (b != NULL) {
		for (int i = 0; i < size; i++) {			// 만약 b 배열이 NULL이 아니라면 b의 모든 값도 sum에 더함
			sum += b[i];
		}
	}

	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);

	cout << c << endl;	// 결과 = 15
	cout << d << endl;	// 결과 = 55
}