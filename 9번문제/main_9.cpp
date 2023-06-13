#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Book {
    char* title; // å ������ �����ϴ� ���ڿ� ������
    int price;   // å ������ �����ϴ� ����

public:
    // ������
    Book(const char* title, int price);
    // ���� ������
    Book(const Book& other);
    // �Ҹ���
    ~Book();
    // ��� �Լ�: å ���� ����
    void set(const char* title, int price);
    // ��� �Լ�: å ���� ���
    void show() { cout << title << " " << price << " �� " << endl; }
};

// �������� ����
Book::Book(const char* title, int price) {
    size_t len = strlen(title); // size_t�� ����
    this->title = new char[len + 1];
    strncpy(this->title, title, len); // strncpy ���
    this->title[len] = '\0'; // �������� �� ���� ���� �߰�
    this->price = price;
}

// ���� �������� ����
Book::Book(const Book& other) {
    size_t len = strlen(other.title); // size_t�� ����
    this->title = new char[len + 1];
    strncpy(this->title, other.title, len); // strncpy ���
    this->title[len] = '\0'; // �������� �� ���� ���� �߰�
    this->price = other.price;
}

// �Ҹ����� ����
Book::~Book() {
    delete[] title; // �������� �Ҵ�� �޸� ����
}

// ��� �Լ� set�� ����
void Book::set(const char* title, int price) {
    if (this->title) {
        delete[] this->title; // ������ �Ҵ�� �޸� ����
    }
    size_t len = strlen(title); // size_t�� ����
    this->title = new char[len + 1];
    strncpy(this->title, title, len); // strncpy ���
    this->title[len] = '\0'; // �������� �� ���� ���� �߰�
    this->price = price;
}

int main() {
    Book cpp("��ǰ C++", 10000); // å ��ü cpp ���� �� �ʱ�ȭ
    Book java = cpp; // ���� ������ ȣ���� ���� cpp�κ��� java ��ü ���� �� �ʱ�ȭ
    java.set("��ǰ�ڹ�", 12000); // java ��ü�� å ���� ����
    cpp.show(); // cpp ��ü�� å ���� ���
    java.show(); // java ��ü�� å ���� ���

    return 0;
}