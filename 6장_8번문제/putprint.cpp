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
		cout << "----- 모든 Trace 정보를 출력합니다 ----- " << endl;
		for (int i = 0; i < count; i++) {
			cout << tag[i] << ":" << msg[i] << endl;
		}
	}
	else {
		cout << "----- 모든 Trace 정보를 출력합니다 -----" << endl;
		for (int i = 0; i < count; i++) {
			if (tag[i] == t) {
				cout << tag[i] << ":" << msg[i] << endl;
			}
		}
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요 >> ";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력받았음.");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}
int main() {
	Trace::put("main()", "프로그램을 시작합니다.");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}