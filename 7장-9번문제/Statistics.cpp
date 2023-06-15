#include <iostream>
using namespace std;

class Statistics {
	int* data;
	int count;
public:
	Statistics() {
		data = new int[10];
		count = 0;
	}
	~Statistics() { delete[] data; }

	// �����ڿ����ε� ! 
	bool operator ! () {
		if (count == 0) return true;
		else return false;
	}

	Statistics& operator << (int a) {
		data[count] = a;
		count++;
		return *this;
	}

	void operator ~ () {
		for (int i = 0; i < count; i++) {
			cout << data[i] << ' ';
		}
		cout << endl;
	}

	void operator >> (int& avg) {
		int sum = 0;
		for (int i = 0; i < count; i++) {
			sum += data[i];
		}
		avg = sum / count;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�. " << endl;

	int x[5];
	cout << "5 ���� ���� �Է� >> "; for (int i = 0; i < 5; i++) cin >> x[i];
	// 100, 200�� ��� ��ü�� �߰��� ����
	stat << 100 << 200;
	~stat; // ��� �����͸� ��� ���

	int avg;
	stat >> avg;		// ��� ��ü�κ��� ����� ����
	cout << "avg = " << avg << endl;	// ��� ���
}