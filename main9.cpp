#include <iostream>
using namespace std;


void wypiszTablice(int *tablica, int liczbaCyfr)
{
    for (int i = 0; i < liczbaCyfr; i++) {
        cout << tablica[i] << endl;
    }

}
void uzupelnijTablice(int *tablica, int liczbaCyfr)
{
    srand((unsigned) time(NULL));
    for (int i = 0; i < liczbaCyfr; i++) {
        tablica[i] = rand() % 101;
    }
}

void sortowanieWstawianieRosnaco(int *tablica, int liczbaCyfr)
{
    for(int i = 1; i < liczbaCyfr; i++)
    {
        int wybranaLiczba = tablica[i];
        int j = i - 1;
        while((wybranaLiczba < tablica[j]) && j >= 0)
        {
            swap(tablica[j + 1], tablica[j]);
            --j;
        }
    }
}

int main() {
    int liczbaCyfr = 20;
    int tablica[liczbaCyfr];

    uzupelnijTablice(tablica, liczbaCyfr);
    sortowanieWstawianieRosnaco(tablica, liczbaCyfr);
    wypiszTablice(tablica, liczbaCyfr);

    return 0;
}
