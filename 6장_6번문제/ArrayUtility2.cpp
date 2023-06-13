#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성, 포인터 리턴
	static int* concat(int s1[], int s2[], int size) {
		int* s3 = new int[size * 2];
		for (int i = 0; i < size; i++)
			s3[i] = s1[i];
		for (int i = 0; i < size; i++)
			s3[i + size] = s2[i];
		return s3;
	}

	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
	// 리턴하는 배열의 크기는 reSize에 전달
	// reSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int& reSize) {
		int* s3 = new int[size];
		int count = 0;
		for (int i = 0; i < size; i++) {
			bool b = false;
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j]) b = true;
			}
			if (!b) {
				s3[count] = s1[i];
				count++;
			}
		}

		if (count == 0) reSize = NULL;
		else reSize = count;
		return s3;
	}
};

int main() {
	int x[5], y[5];
	int* concat;
	int* remove;
	int reSize;

	cout << " x배열 정수를 5개 입력 >> "; 
	for (int i = 0; i < 5; i++) {
		int n; 
		cin >> n;
		x[i] = n;
	}
	cout << " y배열 정수를 5개 입력 >> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		y[i] = n;
	}

	concat = ArrayUtility2::concat(x, y, 5);
	remove = ArrayUtility2::remove(x, y, 5, reSize);

	cout << "합친 정수 배열을 출력 : ";
	for (int i = 0; i < 10; i++) {
		cout << concat[i] << ' ';
	}
	cout << endl;
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력 : ";
	if (reSize == NULL) cout << "없음";
	else {
		cout << "개수는 " << reSize << ", ";
		for (int i = 0; i < reSize; i++) {
			cout << remove[i] << ' ';
		}
	}
	cout << endl;
}