#include <iostream>
using namespace std;


int main() {
    int tablica[3][3];

    srand((unsigned) time(NULL));
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            tablica[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << tablica[i][j] << endl;
        }
    }

    int wyznacznik =((tablica[0][0]*tablica[1][1]*tablica[2][2])+(tablica[1][0]*tablica[2][1]*tablica[0][2])+(tablica[2][0]*tablica[0][1]*tablica[1][2])-((tablica[0][2]*tablica[1][1]*tablica[2][0])+(tablica[1][2]*tablica[2][1]*tablica[0][0])+(tablica[2][2]*tablica[0][1]*tablica[1][0])));

    cout << "Wyznacznik: " << wyznacznik << endl;

    return 0;
}
