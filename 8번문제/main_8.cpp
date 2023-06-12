// append() �Լ� ����

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
���� ���� �ڵ忡�� Buffer Ŭ������ �־��� ���ڿ��� �����ϰ�, 

���ڿ��� �߰��ϴ� add() �Լ��� ����� ���ڿ��� ����ϴ� print() �Լ��� ������ �ֽ��ϴ�.

append() �Լ��� Buffer ��ü(buf)�� �߰��� ���ڿ�(next)�� �Ű������� �޽��ϴ�. 

�Լ� ���ο����� Buffer ��ü�� add() �Լ��� ȣ���Ͽ� �־��� ���ڿ��� �߰��մϴ�. 

�׸��� Buffer ��ü(buf)�� ������ ��ȯ�մϴ�.

main() �Լ������� �ʱ� ���ڿ��� "Hello"�� Buffer ��ü(buf)�� �����մϴ�. 

�׸��� append() �Լ��� ȣ���Ͽ� ���ڿ� "Guys"�� �߰��ϰ� ��ȯ�� Buffer ��ü�� ����(temp)�� �޽��ϴ�.

���������� temp.print()�� buf.print()�� ȣ���Ͽ� ���ڿ��� ����մϴ�.

*/