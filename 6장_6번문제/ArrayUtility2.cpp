#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� ����, ������ ����
	static int* concat(int s1[], int s2[], int size) {
		int* s3 = new int[size * 2];
		for (int i = 0; i < size; i++)
			s3[i] = s1[i];
		for (int i = 0; i < size; i++)
			s3[i + size] = s2[i];
		return s3;
	}

	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
	// �����ϴ� �迭�� ũ��� reSize�� ����
	// reSize�� 0�� ��� NULL ����
	static int* remove(int s1[], int s2[], int size, int& reSize) {
		int* s3 = new int[size];
		int count = 0;
		for (int i = 0; i < size; i++) {
			bool b = false;
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j]) b = true;
			}
			if (!b) {
				s3[count] = s1[i];
				count++;
			}
		}

		if (count == 0) reSize = NULL;
		else reSize = count;
		return s3;
	}
};

int main() {
	int x[5], y[5];
	int* concat;
	int* remove;
	int reSize;

	cout << " x�迭 ������ 5�� �Է� >> "; 
	for (int i = 0; i < 5; i++) {
		int n; 
		cin >> n;
		x[i] = n;
	}
	cout << " y�迭 ������ 5�� �Է� >> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		y[i] = n;
	}

	concat = ArrayUtility2::concat(x, y, 5);
	remove = ArrayUtility2::remove(x, y, 5, reSize);

	cout << "��ģ ���� �迭�� ��� : ";
	for (int i = 0; i < 10; i++) {
		cout << concat[i] << ' ';
	}
	cout << endl;
	cout << "�迭 x[]���� y[]�� �� ����� ��� : ";
	if (reSize == NULL) cout << "����";
	else {
		cout << "������ " << reSize << ", ";
		for (int i = 0; i < reSize; i++) {
			cout << remove[i] << ' ';
		}
	}
	cout << endl;
}