#include <iostream>
#include <random>
using namespace std;

class Random {
public:
	// 항상 다른 난수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

// 정수형 난수 리턴 함수
int Random::nextInt(int min, int max) {
	// 난수의 범위를 min~max 설정
	int r = rand() % (max - min + 1) + min;
	return r;
}

// 문자형 난수 리턴 함수
char Random::nextAlphabet() {
	// 대문자와 소문자 중 랜덤설정
	char c = rand() % 2;
	// 대문자 (아스키 코드표에서 65(A) ~ 90(Z))
	if (c == 0) {
		c = (rand() % 26) + 65;
		return c;
	}
	// 소문자 (아스키 코듶에서 97(a) ~ 122(z))
	else {
		c = (rand() % 26) + 97;
		return c;
	}
}

// 실수형 난수 리턴 함수
double Random::nextDouble() {
	// 난수의 범위를 0~만큼 설정
	double d = rand() / (double)(RAND_MAX + 1);
	return d;
}

int main() {
	cout << "1에서 100까지 랜덤한 정수, 알파벳, 실수 각각 10개를 출력 " << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(3, 5) << ' ' << endl;
		cout << Random::nextAlphabet() << ' ' << endl;
		cout << Random::nextDouble() << ' ' << endl;
		cout << i << "번째 랜덤 종료" << endl;
		cout << endl;
	}
}
