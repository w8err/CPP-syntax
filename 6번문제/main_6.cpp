#include <iostream>
using namespace std;

class MyIntStack {
	int p[10]; // �ִ� 10�� ���� ���� ����
	int tos = 0; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack();
	void push(int n);
	void pop(int& n);
	void show();
};

MyIntStack::MyIntStack() {
	// �����ڿ��� tos�� �ʱⰪ�� ����
	tos = 0;
}

void MyIntStack::push(int n) {
	if (tos < 10) {
		p[tos++] = n;
		cout << "Pushed : " << n << endl;
	}
	else {
		cout << "������ �� á���ϴ�." << endl;
	}
}

void MyIntStack::pop(int& n) {
	if (tos > 0) {
		n = p[--tos];
		cout << "�� : " << n << endl;
	}
	else {
		cout << "������ ������ϴ�. " << endl;
	}
}

void MyIntStack::show() {
	cout << "���� ���� " << endl;
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
		cout << "1.push \n2. pop \n3. ���� >> "; cin >> select;
		switch (select)
		{
		case 1:
			cout << "push : "; cin >> input;
			a.push(input);
			a.show();
			break;
		case 2:
			a.pop(result);
			cout << "�� �� �� : " << result << endl;
			a.show();
			break;
		default:
			break;
		}
	}
}