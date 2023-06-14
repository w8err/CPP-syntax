#include <iostream>
using namespace std;

class Board {
public:
	static int count;
	static string text[100];
	static void add(string text);
	static void print();
};

int Board::count = 0;
string Board::text[100];

void Board::add(string text) {
	Board::text[count] = text;
	count++;

}

void Board::print() {
	cout << "**********�Խ����Դϴ�.************" << endl;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << ":" << text[i] << endl;
	}
}


int main() {
	Board::add("�߰����� ���� ���� ���������Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿����ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ�� �Ի��Ͽ����ϴ�. �������ּ���.");
	Board::print();
}