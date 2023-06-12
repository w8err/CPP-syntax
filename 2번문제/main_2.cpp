#include <iostream>
#include <cctype>

//


using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
	static char dummy;	// ���н� ��ȯ�� ���̹���
	return dummy;
}

int main() {
	char s[100];	// �ִ� ���̰� 100�� ���� �迭
	cout << "�˻��� ���ڿ� �Է� >> " << endl;
	cin >> s;

	char findChar;
	cout << "��ҹ��ڸ� ������ ���� 1�� �Է� >> " << endl;
	cin >> findChar;

	bool found = false;
	char& loc = find(s, findChar, found);
	if (!found) {
		cout << findChar << "��(��) �߰��� �� �����ϴ�. " << endl;
			return 0;
	}

	// ��ҹ��� ��ȯ
	if (isupper(loc)) {
		loc = tolower(loc);
	} 
	else if (islower(loc)) {
		loc = toupper(loc);
	}

	cout << "����� ���ڿ� : " << s << endl;

	return 0;
}