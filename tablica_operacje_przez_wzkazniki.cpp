#include <iostream>

using namespace std;

int main() {
    srand((unsigned) time(NULL));
    int rozmiarTablicy = 0;

    cout << "Podaj rozmiar tablicy: " << endl;

    while (!(cin >> rozmiarTablicy))
    {
        cout << "Podaj prawidlowy rozmiar tablicy: " << endl;
        cin.clear();
        cin.ignore(500, '\n');
    }

    int *tablica = new int[rozmiarTablicy];


    for (int i = 0; i < rozmiarTablicy; i++) {
        *(tablica + i) = rand() % 101;
    }

    for(int i = 0; i < rozmiarTablicy; i++){
        cout << *(tablica + i) << " ";
    }
    cout << endl;

    int *minLiczba = tablica;

    for (int i = 1; i < rozmiarTablicy; i++) {
        if (*(tablica + i) < *minLiczba) {
            *minLiczba = *(tablica + i);
        }
    }

    cout << "Minimalna liczba: " << *minLiczba << endl;

    int* maxLiczba = tablica;

    for (int i = 1; i < rozmiarTablicy; i++) {
        if (*(tablica + i) > *maxLiczba) {
            *maxLiczba = *(tablica + i);
        }
    }

    cout << "Maksymalna liczba: " << *minLiczba << endl;

    int suma = 0;

    for (int i = 1; i < rozmiarTablicy; i++) {
        suma += *(tablica + i);
    }

    cout << "Suma liczb: " << suma << endl;

    delete[] tablica;

    return 0;
}
