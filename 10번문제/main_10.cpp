#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {						// 생성자
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept);			// 복사생성자
	~Dept();								// 소멸자
	int getSize() { return size; }
	// size만큼 키보드에서 정수를 읽어 scores 배열에 저장
	void read();
	// index의 학생의 성적이 60보다 크면 true 리턴
	bool isOver60(int index);
};

Dept::Dept(const Dept& dept) { }
Dept::~Dept() { }
void Dept::read() { }
bool Dept::isOver60(int index) { }

// dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
int countPass(Dept dept) {
	int count = 0;
	for (int I = 0; I < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}



int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";
}
