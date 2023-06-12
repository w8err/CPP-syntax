// append() 함수 구현

#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string next) {
	buf.add(next);
	return buf;
}


int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}

/*
위의 예시 코드에서 Buffer 클래스는 주어진 문자열을 저장하고, 

문자열을 추가하는 add() 함수와 저장된 문자열을 출력하는 print() 함수를 가지고 있습니다.

append() 함수는 Buffer 객체(buf)와 추가할 문자열(next)을 매개변수로 받습니다. 

함수 내부에서는 Buffer 객체의 add() 함수를 호출하여 주어진 문자열을 추가합니다. 

그리고 Buffer 객체(buf)를 참조로 반환합니다.

main() 함수에서는 초기 문자열이 "Hello"인 Buffer 객체(buf)를 생성합니다. 

그리고 append() 함수를 호출하여 문자열 "Guys"를 추가하고 반환된 Buffer 객체를 참조(temp)로 받습니다.

마지막으로 temp.print()와 buf.print()를 호출하여 문자열을 출력합니다.

*/