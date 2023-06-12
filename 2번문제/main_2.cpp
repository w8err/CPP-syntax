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
	static char dummy;	// 실패시 반환할 더미문자
	return dummy;
}

int main() {
	char s[100];	// 최대 길이가 100인 문자 배열
	cout << "검사할 문자열 입력 >> " << endl;
	cin >> s;

	char findChar;
	cout << "대소문자를 변경할 문자 1개 입력 >> " << endl;
	cin >> findChar;

	bool found = false;
	char& loc = find(s, findChar, found);
	if (!found) {
		cout << findChar << "을(를) 발견할 수 없습니다. " << endl;
			return 0;
	}

	// 대소문자 변환
	if (isupper(loc)) {
		loc = tolower(loc);
	} 
	else if (islower(loc)) {
		loc = toupper(loc);
	}

	cout << "변경된 문자열 : " << s << endl;

	return 0;
}