#include <iostream>
using namespace std;

class MyIntStack {
	int p[10]; // 최대 10개 양의 정수 저장
	int tos = 0; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	void push(int n);
	void pop(int& n);
	void show();
};

MyIntStack::MyIntStack() {
	// 생성자에서 tos의 초기값을 설정
	tos = 0;
}

void MyIntStack::push(int n) {
	if (tos < 10) {
		p[tos++] = n;
		cout << "Pushed : " << n << endl;
	}
	else {
		cout << "스택이 꽉 찼습니다." << endl;
	}
}

void MyIntStack::pop(int& n) {
	if (tos > 0) {
		n = p[--tos];
		cout << "팝 : " << n << endl;
	}
	else {
		cout << "스택이 비었습니다. " << endl;
	}
}

void MyIntStack::show() {
	cout << "현재 스택 " << endl;
	for (int i = 0; i < tos; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}


int main() {
	MyIntStack a;
	int result;
	int select = 0;
	int input;

	while (select != 3) {
		cout << "1.push \n2. pop \n3. 종료 >> "; cin >> select;
		switch (select)
		{
		case 1:
			cout << "push : "; cin >> input;
			a.push(input);
			a.show();
			break;
		case 2:
			a.pop(result);
			cout << "팝 한 값 : " << result << endl;
			a.show();
			break;
		default:
			break;
		}
	}
}