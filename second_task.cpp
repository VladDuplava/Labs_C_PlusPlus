#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введіть розмір масиву: ";
    cin >> N;

    int A[N];

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int T;
    cout << "Введіть число T: ";
    cin >> T;

    int* firstElemT = nullptr;
    int* maxNegativePointer = nullptr;

    //p вказівник на елемент масиву
    //firstElemT це вказівник на поточний елемемнт який більший за T
    for (int* p = A; p < A + N; p++) {
        if (*p > T) {
            firstElemT = p;
            break;
        }
    }

    if (firstElemT == nullptr) {
        cout << "Немає числа > T" << endl;
        return 0;
    }


    for (int* p = A; p < firstElemT; p++) {
        if (*p < 0 && (maxNegativePointer == nullptr || *p > *maxNegativePointer)) {
            maxNegativePointer = p;
        }
    }

    if (maxNegativePointer) {
        cout << "Індекс першого максимального від’ємного елемента: " << (maxNegativePointer - A) << endl;
    } else {
        cout << "Немає від’ємних чисел до T" << endl;
    }

    return 0;
}
