#include <iostream>
#include <vector>
#include <limits>

int main() {
    int N;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> N;

    std::vector<int> A(N);
    std::cout << "Введіть елементи масиву: ";
    for (int &x : A) std::cin >> x;

    int min_positive = std::numeric_limits<int>::max(), min_index = -1;

    
    for (int i = 0; i < N; i++) {
        if (A[i] > 0 && A[i] < min_positive) {
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
