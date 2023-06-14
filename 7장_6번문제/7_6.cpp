#include <iostream>
using namespace std;

class Matrix {
	int matrix[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		matrix[0] = a; matrix[1] = b; matrix[2] = c; matrix[3] = d;

	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << matrix[i] << ", ";
		}
		cout << " } " << endl;
	}

	Matrix operator + (Matrix m) {
		Matrix matrix;
		for (int i = 0; i < 4; i++) {
			matrix.matrix[i] = this->matrix[i] + m.matrix[i];
		}
		return matrix;
	}

	void operator += (Matrix m) {
		for (int i = 0; i < 4; i++) {
			this->matrix[i] += m.matrix[i];
		}
	}

	bool operator == (Matrix m) {
		for (int i = 0; i < 4; i++) {
			if (this->matrix[i] != m.matrix[i]) return false;
		}
		return true;
	}
};

int main() {
	Matrix a(1, 2, 3, 4);
	Matrix b(2, 3, 4, 5);
	Matrix c;

	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c) cout << "a and c ard the same" << endl;
}