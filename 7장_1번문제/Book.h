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
		cout << "<" << title << ">" << ',' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	//void operator += (int price) {
	//	this->price += price;
	//}
	//void operator -= (int price) {
	//	this->price -= price;
	//}

	////2������
	//bool operator!() {		// ��¥���� �����ϴ� ���۷�����
	//	return (price == 0);
	//}

	//3������
	friend bool operator<(string s, Book op2);
};

	bool operator<(string s, Book op2){
	if (s < op2.getTitle()) return true; // �� < �����ڴ� string ���ο� �����Ǿ�����
	else return false;
}