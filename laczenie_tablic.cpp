#include <iostream>

using namespace std;

int main() {
    const int rozmiarTablicy = 3;
    const int rozmiarTablicyPolaczonej = 2 * rozmiarTablicy + 2;

    int *tablica1 = new int[rozmiarTablicy];
    int *tablica2 = new int[rozmiarTablicy];
    int *tablicaPolaczona = new int[rozmiarTablicyPolaczonej];

    for (int i = 0; i < rozmiarTablicy; i++) {
        cout << "Podaj element " << i << " pierwszej tablicy" << ": ";
        cin >> tablica1[i];
    }
    for (int i = 0; i < rozmiarTablicy; i++) {
        cout << "Podaj element " << i << " drugiej tablicy" << ": ";
        cin >> tablica2[i];
    }
    for (int i = 0; i < 2; ++i) {
        cout << "Podaj element " << i + rozmiarTablicyPolaczonej - 2 << " tablicy polaczonej: ";
        cin >> tablicaPolaczona[rozmiarTablicyPolaczonej - 2 + i];
    }

    for (int i = 0; i < rozmiarTablicy; ++i) {
        tablicaPolaczona[i] = tablica1[i];
        tablicaPolaczona[i + rozmiarTablicy] = tablica2[i];
    }

    cout << "Tablica połączona:" << endl;
    for (int i = 0; i < rozmiarTablicyPolaczonej; i++) {
        cout << "indeks " << i << ": " << tablicaPolaczona[i] << endl;
    }

    return 0;
}
