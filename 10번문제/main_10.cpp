#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {						// ������
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept);			// ���������
	~Dept();								// �Ҹ���
	int getSize() { return size; }
	// size��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	void read();
	// index�� �л��� ������ 60���� ũ�� true ����
	bool isOver60(int index);
};

Dept::Dept(const Dept& dept) { }
Dept::~Dept() { }
void Dept::read() { }
bool Dept::isOver60(int index) { }

// dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
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
	cout << "60�� �̻��� " << n << "��";
}
