#include <iostream>
using namespace std;

class Stack {
public:
	int stack[10];
	int index = 0;
	Stack& operator << (int a) {	// 스택에 수를 삽입하는 연산
		stack[index] = a;
		index++;
		return *this;
	}
	bool operator ! () {	// 스택이 비어있는지 검사
		if (index == 0) return true;
		else return false;
	}

	void operator >> (int& a) {		// 스택을 팝하는 연산자
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