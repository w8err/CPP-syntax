#include <iostream>
#include <string>
#include "Book.h"


// 1������
//int main() {
//Book a("û��", 20000, 300);
//Book b("�̷�", 30000, 500);
//
//a += 500;	// å a�� ���� 500 ����
//b -= 500;	// å b�� ���� 500 ����
//
//a.show();
//b.show();
//}

// 2������
//int main() {
//	Book book("�������", 0, 50); 
//	if (!book) cout << "��¥��" << endl;
//}

// 3������
int main() {
	Book a("û��", 20000, 300);
	string b;

	cout << "å �̸� �Է� >> ";
	getline(cin, b);	// Ű����κ��� ���ڿ� å �̸��� �Է¹���

	if (b < a) cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}