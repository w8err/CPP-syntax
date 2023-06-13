#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person(int id = 1, string name="Grace", int weight = 20.5);		// 기본생성자 직접 지정
	void Show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};

Person::Person(int id, string name, int weight) {
	this->id = id;
	this->name = name;
	this->weight = weight;

}

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.Show();
	ashley.Show();
	helen.Show();
}