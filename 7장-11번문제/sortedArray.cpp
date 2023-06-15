#include <iostream>
using namespace std;

class SortedArray {
	int size;		// ���� �迭�� ũ��
	int* p;			// ���� �迭�� ���� ������
	void sort()	// p �迭�� ������������ ���� 
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

	SortedArray(int p[], int size) {	// ������
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
	}

	SortedArray(SortedArray& src) {		// ���� ������
		this->size = src.size;
		this->p = new int[src.size];
		for (int i = 0; i < src.size; ++i)
			this->p[i] = src.p[i];
	}

	~SortedArray() { if (p) delete[] p; }	// �Ҹ���

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
		cout << "�迭 ��� : ";
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

	c = a + b;	// c ��ü�� a�� b �迭�� ��ģ ��ü ����

	a.show();
	b.show();
	c.show();
}