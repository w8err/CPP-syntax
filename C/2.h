

// find 함수 구현문제

/*
find 함수는 char 배열 a[], 찾을 문자 c, success라는 참조 변수를 매개변수로 받음.
입력된 배열 a[]를 순회하면서 c와 일치하는 문자를 찾으면 success를 true로 변경해줘야함

*/
char& find(char a[], char c, bool& success) {

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
	return a[0];		// 기본값은 배열의 첫 번째
}

int EX2();
