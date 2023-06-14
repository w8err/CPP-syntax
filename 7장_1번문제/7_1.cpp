#include <iostream>
#include <string>
#include "Book.h"


// 1번문제
//int main() {
//Book a("청춘", 20000, 300);
//Book b("미래", 30000, 500);
//
//a += 500;	// 책 a의 가격 500 증가
//b -= 500;	// 책 b의 가격 500 감소
//
//a.show();
//b.show();
//}

// 2번문제
//int main() {
//	Book book("벼룩시장", 0, 50); 
//	if (!book) cout << "공짜다" << endl;
//}

// 3번문제
int main() {
	Book a("청춘", 20000, 300);
	string b;

	cout << "책 이름 입력 >> ";
	getline(cin, b);	// 키보드로부터 문자열 책 이름을 입력받음

	if (b < a) cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}