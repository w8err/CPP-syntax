

// find �Լ� ��������

/*
find �Լ��� char �迭 a[], ã�� ���� c, success��� ���� ������ �Ű������� ����.
�Էµ� �迭 a[]�� ��ȸ�ϸ鼭 c�� ��ġ�ϴ� ���ڸ� ã���� success�� true�� �����������

*/
char& find(char a[], char c, bool& success) {

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
	return a[0];		// �⺻���� �迭�� ù ��°
}

int EX2();
