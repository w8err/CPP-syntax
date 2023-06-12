#include <iostream>
#include <cstring>

using namespace std;

class Book {
    char* title;
    int price;
public:
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);

    void show() { cout << title << " " << price << " �� " << endl; }
};

Book::Book(const char* title, int price) {
    int len = strlen(title) + 1;
    this->title = new char[len];
    strcpy(this->title, title);

    this->price = price;
}

Book::~Book() {
    delete[] title;
}

void Book::set(const char* title, int price) {
    delete[] this->title;
    int len = strlen(title) + 1;
    this->title = new char[len];
    strcpy(this->title, title);

    this->price = price;
}

int main() {
    Book cpp("��ǰ C++", 10000);
    Book java = cpp;
    java.set("��ǰ�ڹ�", 12000);
    cpp.show();
    java.show();

    return 0;
}