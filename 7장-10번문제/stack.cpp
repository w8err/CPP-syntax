#include <iostream>
using namespace std;

class Stack {
public:
	int stack[10];
	int index = 0;
	Stack& operator << (int a) {	// ���ÿ� ���� �����ϴ� ����
		stack[index] = a;
		index++;
		return *this;
	}
	bool operator ! () {	// ������ ����ִ��� �˻�
		if (index == 0) return true;
		else return false;
	}

	void operator >> (int& a) {		// ������ ���ϴ� ������
		index--;
		a = stack[index];
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;

	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}