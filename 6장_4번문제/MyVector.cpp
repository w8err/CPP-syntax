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

// �Ű������� ���� ��� �迭 100�� ���� �� 0���� �ʱ�ȭ

// �Ű������� ���� ��� �迭 n�� ���� �� val�� �ʱ�ȭ


int main() {
	MyVector v1;
	MyVector v2(10, 5);
}