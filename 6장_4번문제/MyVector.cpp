#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector() { delete[] mem; }
};


MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) {
		mem[i] = val;
		cout << mem[i] << ' ';
	}
	cout << endl;
}

// 매개변수가 없을 경우 배열 100개 생성 및 0으로 초기화

// 매개변수가 있을 경우 배열 n개 생성 및 val로 초기화


int main() {
	MyVector v1;
	MyVector v2(10, 5);
}