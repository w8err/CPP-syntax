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