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
	cout << "**********게시판입니다.************" << endl;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << ":" << text[i] << endl;
	}
}


int main() {
	Board::add("중간고사는 감독 없는 자율시험입니다.");
	Board::add("코딩 라운지 많이 이용해주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회에 입상하였습니다. 축하해주세요.");
	Board::print();
}