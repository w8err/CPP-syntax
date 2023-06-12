#include <iostream>
#include <random>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int get();
};

Accumulator::Accumulator(int value) {
	this->value = value;

}

Accumulator& Accumulator::add(int n) { 
	value += n;
	return *this;
}

int Accumulator::get() { 
	return value;
}


int main() {
	int value = 0;
	cout << "계산될 값 입력 : "; cin >> value;

	Accumulator acc(value);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}