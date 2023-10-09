#include <iostream>

int main() {
    int i = 0;
    std::cin >> i;
    if (i >= 0 && i <= 100 || i >= 1000 && i <= 1100) {
        std::cout << "Liczba nalezy do zakresu" << std::endl;
    } else {
        std::cout << "Liczba jest poza zakeresem" << std::endl;
    }
    return 0;
}
