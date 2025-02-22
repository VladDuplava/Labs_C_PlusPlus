#include <iostream>
//test github
int main() {
    int N;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> N;

    int A[N];
    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int min_positive = -1, min_index = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] > 0 && (min_positive == -1 || A[i] < min_positive)) {
            min_positive = A[i];
            min_index = i;
        }
    }

    if (min_index != -1) {
        std::cout << "Мінімальний додатний елемент: " << min_positive << ", Індекс: " << min_index << std::endl;
    } else {
        std::cout << "Немає додатних елементів" << std::endl;
    }

    return 0;
}
