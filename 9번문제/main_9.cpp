#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Book {
    char* title; // 책 제목을 저장하는 문자열 포인터
    int price;   // 책 가격을 저장하는 정수

public:
    // 생성자
    Book(const char* title, int price);
    // 복사 생성자
    Book(const Book& other);
    // 소멸자
    ~Book();
    // 멤버 함수: 책 정보 설정
    void set(const char* title, int price);
    // 멤버 함수: 책 정보 출력
    void show() { cout << title << " " << price << " 원 " << endl; }
};

// 생성자의 정의
Book::Book(const char* title, int price) {
    size_t len = strlen(title); // size_t로 변경
    this->title = new char[len + 1];
    strncpy(this->title, title, len); // strncpy 사용
    this->title[len] = '\0'; // 수동으로 널 종료 문자 추가
    this->price = price;
}

// 복사 생성자의 정의
Book::Book(const Book& other) {
    size_t len = strlen(other.title); // size_t로 변경
    this->title = new char[len + 1];
    strncpy(this->title, other.title, len); // strncpy 사용
    this->title[len] = '\0'; // 수동으로 널 종료 문자 추가
    this->price = other.price;
}

// 소멸자의 정의
Book::~Book() {
    delete[] title; // 동적으로 할당된 메모리 해제
}

// 멤버 함수 set의 정의
void Book::set(const char* title, int price) {
    if (this->title) {
        delete[] this->title; // 기존에 할당된 메모리 해제
    }
    size_t len = strlen(title); // size_t로 변경
    this->title = new char[len + 1];
    strncpy(this->title, title, len); // strncpy 사용
    this->title[len] = '\0'; // 수동으로 널 종료 문자 추가
    this->price = price;
}

int main() {
    Book cpp("명품 C++", 10000); // 책 객체 cpp 생성 및 초기화
    Book java = cpp; // 복사 생성자 호출을 통해 cpp로부터 java 객체 생성 및 초기화
    java.set("명품자바", 12000); // java 객체의 책 정보 변경
    cpp.show(); // cpp 객체의 책 정보 출력
    java.show(); // java 객체의 책 정보 출력

    return 0;
}