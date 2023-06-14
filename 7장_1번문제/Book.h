#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << "<" << title << ">" << ',' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }

	//void operator += (int price) {
	//	this->price += price;
	//}
	//void operator -= (int price) {
	//	this->price -= price;
	//}

	////2번문제
	//bool operator!() {		// 꽁짜인지 점검하는 오퍼레이터
	//	return (price == 0);
	//}

	//3번문제
	friend bool operator<(string s, Book op2);
};

	bool operator<(string s, Book op2){
	if (s < op2.getTitle()) return true; // 이 < 연산자는 string 내부에 구현되어있음
	else return false;
}