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
            cout << "학생 " << (i + 1) << "의 성적을 입력하세요: ";
            cin >> scores[i];
        }
    }

    bool isOver60(int index) {
        return scores[index] > 60;
    }
};

// dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
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
    cout << "학생 수 입력 "; cin >> num;
    Dept com(num);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명";
}