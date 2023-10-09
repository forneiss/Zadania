#include <iostream>

using namespace std;

int main() {
    int i = 0;
    cin >> i;
    if (i % 2 == 0 || i % 3 == 0 || i % 4 == 0 || i % 5 == 0 || i % 6 == 0 || i % 7 == 0) {
        cout << "Liczba jest podzielna" << endl;
    } else {
        cout << "Liczba jest niepodzielna" << endl;
    }

    return 0;
}
