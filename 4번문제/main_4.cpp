// �Ʒ��� ���� ������ �־��� bigger()�� �ۼ��ϰ� ����ڷκ��� 2���� ������ �Է¹޾� ū ���� ����ϴ� main()�� �ۼ�����.
// bigger�� ���ڷ� �־��� a,b �� ������ true, �ƴϸ� false�� �����ϰ� ū ���� big�� ������

#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b) {
		big = a;
		return false;
	}
	else if (b > a) {
		big = b;
		return false;
	}
	else { return true; }
}


int main() {
	int a, b, big = 0;
	bool comp;
	cout << "1��° ���� �Է� : "; cin >> a;
	cout << "2��° ���� �Է�	: "; cin >> b;
	
	comp = bigger(a, b, big);
	if (comp) {
		cout << "a�� b�� ����. " << endl; 
		return 0;
	}
	cout << "ū ���� " << big << endl;
	return 0;
}