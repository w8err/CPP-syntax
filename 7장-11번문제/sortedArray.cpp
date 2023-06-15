#include <iostream>
using namespace std;

class SortedArray {
	int size;		// 현재 배열의 크기
	int* p;			// 정수 배열에 대한 포인터
	void sort()	// p 배열을 오름차순으로 정렬 
	{
		for (int i = size - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (p[j] > p[j + 1]) {
					int tmp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = tmp;
				}
			}
		}
	}
public:
	SortedArray() { p = NULL; size = 0; }

	SortedArray(int p[], int size) {	// 생성자
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
	}

	SortedArray(SortedArray& src) {		// 복사 생성자
		this->size = src.size;
		this->p = new int[src.size];
		for (int i = 0; i < src.size; ++i)
			this->p[i] = src.p[i];
	}

	~SortedArray() { if (p) delete[] p; }	// 소멸자

	SortedArray operator + (SortedArray& op2) {
		SortedArray tmp;
		tmp.p = new int[this->size + op2.size];
		tmp.size = this->size + op2.size;
		for (int i = 0; i < this->size; ++i)
			tmp.p[i] = this->p[i];
		for (int i = 0; i < op2.size; ++i)
			tmp.p[i + this->size] = op2.p[i];
		return tmp;
	}

	SortedArray operator = (const SortedArray& op2) {
		delete[] this->p;
		this->p = new int[op2.size];
		this->size = op2.size;
		for (int i = 0; i < op2.size; ++i)
			this->p[i] = op2.p[i];
		return *this;
	}

	void show() {
		this->sort();
		cout << "배열 출력 : ";
		for (int i = 0; i < this->size; i++)
			cout << p[i] << ' ';
			cout << endl;
	}
};

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3);
	SortedArray b(m, 4);
	SortedArray c;

	c = a + b;	// c 객체에 a와 b 배열을 합친 객체 복사

	a.show();
	b.show();
	c.show();
}