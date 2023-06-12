// 아래와 같이 원형이 주어진 bigger()를 작성하고 사용자로부터 2개의 정수를 입력받아 큰 값을 출력하는 main()을 작성하자.
// bigger는 인자로 주어진 a,b 가 같으면 true, 아니면 false를 리턴하고 큰 수는 big에 전달함

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
	cout << "1번째 정수 입력 : "; cin >> a;
	cout << "2번째 정수 입력	: "; cin >> b;
	
	comp = bigger(a, b, big);
	if (comp) {
		cout << "a와 b는 같다. " << endl; 
		return 0;
	}
	cout << "큰 수는 " << big << endl;
	return 0;
}