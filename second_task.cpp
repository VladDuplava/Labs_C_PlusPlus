#include <iostream>

using namespace std;

int main() {
    int N; 
    cout << "Введіть розмір масиву: ";
    cin >> N;

    int* A = new int[N];

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int T; 
    cout << "Введіть число T: ";
    cin >> T;

    int* firstElemT = nullptr; 
    int* maxNegPtr = nullptr; 

    for (int* p = A; p < A + N; p++) {
        if (*p > T) {
            firstElemT = p;
            break;
        }
    }

    if (!firstElemT) {
        cout << "Немає числа > T" << endl;
        delete[] A; 
        return 0;
    }

    for (int* p = A; p < firstElemT; p++) {
        if (*p < 0 && (!maxNegPtr || *p > *maxNegPtr)) {
            maxNegPtr = p;
        }
    }

    if (maxNegPtr) {
        cout << "Індекс першого максимального від’ємного елемента: " << (maxNegPtr - A) << endl;
    } else {
        cout << "Немає від’ємних чисел до T" << endl;
    }

    delete[] A; 

    return 0;
}
