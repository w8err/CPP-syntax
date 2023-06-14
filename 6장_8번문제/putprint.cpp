#include <iostream>
using namespace std;

class Trace {
	static string tag[100];
	static string msg[100];
	static int count;
public:
	static void put(string t, string m);
	static void print(string t = " ");
};
int Trace::count = 0;
string Trace::tag[100];
string Trace::msg[100];

void Trace::put(string t, string m) {
	tag[count] = t;
	msg[count] = m;
	count++;
}

void Trace::print(string t) {
	if (t == " ") {
		cout << "----- ��� Trace ������ ����մϴ� ----- " << endl;
		for (int i = 0; i < count; i++) {
			cout << tag[i] << ":" << msg[i] << endl;
		}
	}
	else {
		cout << "----- ��� Trace ������ ����մϴ� -----" << endl;
		for (int i = 0; i < count; i++) {
			if (tag[i] == t) {
				cout << tag[i] << ":" << msg[i] << endl;
			}
		}
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ��� >> ";
	cin >> a >> b;
	Trace::put("f()", "������ �Է¹޾���.");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}
int main() {
	Trace::put("main()", "���α׷��� �����մϴ�.");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}