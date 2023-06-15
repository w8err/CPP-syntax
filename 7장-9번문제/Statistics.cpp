#include <iostream>
using namespace std;

class Statistics {
	int* data;
	int count;
public:
	Statistics() {
		data = new int[10];
		count = 0;
	}
	~Statistics() { delete[] data; }

	// 연산자오버로딩 ! 
	bool operator ! () {
		if (count == 0) return true;
		else return false;
	}

	Statistics& operator << (int a) {
		data[count] = a;
		count++;
		return *this;
	}

	void operator ~ () {
		for (int i = 0; i < count; i++) {
			cout << data[i] << ' ';
		}
		cout << endl;
	}

	void operator >> (int& avg) {
		int sum = 0;
		for (int i = 0; i < count; i++) {
			sum += data[i];
		}
		avg = sum / count;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다. " << endl;

	int x[5];
	cout << "5 개의 정수 입력 >> "; for (int i = 0; i < 5; i++) cin >> x[i];
	// 100, 200을 통계 객체에 추가로 삽입
	stat << 100 << 200;
	~stat; // 통계 데이터를 모두 출력

	int avg;
	stat >> avg;		// 통계 객체로부터 평균을 받음
	cout << "avg = " << avg << endl;	// 평균 출력
}