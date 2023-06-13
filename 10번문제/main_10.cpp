#include <iostream>
using namespace std;

class Dept {
    int size;
    int* scores;

public:
    Dept(int size) {
        this->size = size;
        scores = new int[size];
    }

    Dept(const Dept& dept) {
        size = dept.size;
        scores = new int[size];
        for (int i = 0; i < size; i++) {
            scores[i] = dept.scores[i];
        }
    }

    ~Dept() {
        delete[] scores;
    }

    int getSize() {
        return size;
    }

    void read() {
        for (int i = 0; i < size; i++) {
            cout << "�л� " << (i + 1) << "�� ������ �Է��ϼ���: ";
            cin >> scores[i];
        }
    }

    bool isOver60(int index) {
        return scores[index] > 60;
    }
};

// dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
int countPass(Dept dept) {
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i))
            count++;
    }
    return count;
}

int main() {
    int num = 0;
    cout << "�л� �� �Է� "; cin >> num;
    Dept com(num);
    com.read();
    int n = countPass(com);
    cout << "60�� �̻��� " << n << "��";
}