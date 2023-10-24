#include <iostream>
using namespace std;


void wypiszTablice(int *tablica, int liczbaCyfr)
{
    for (int i = 0; i < liczbaCyfr; i++) {
        cout << tablica[i] << endl;
    }

}

void wyszukajLiczbe(int *tablica, int liczbaCyfr, int szukanaLiczba)
{
    for (int i = 0; i < liczbaCyfr; i++) {
        if(szukanaLiczba == tablica[i]){
            cout << "Znaleziona. Liczba ma indeks: " << i << endl;
        }
    }
}

void uzupelnijTablice(int *tablica, int liczbaCyfr)
{
    srand((unsigned) time(NULL));
    for (int i = 0; i < liczbaCyfr; i++) {
        tablica[i] = rand() % 101;
    }
}

void sortowanieBabelkowe(int *tablica, int liczbaCyfr)
{
    for(int i = 0; i < liczbaCyfr; i++)
        for(int j = 1; j < liczbaCyfr-i; j++)
            if(tablica[j - 1] > tablica[j])
                swap(tablica[j - 1], tablica[j]);
}

int main()
{
    int liczbaCyfr = 100;
    int tablica[liczbaCyfr];
    int szukanaLiczba = 0;

    cout << "Szukana liczba: " << endl;
    scanf("%d", &szukanaLiczba);

    uzupelnijTablice(tablica, liczbaCyfr);
    sortowanieBabelkowe(tablica, liczbaCyfr);
    wypiszTablice(tablica, liczbaCyfr);
    wyszukajLiczbe(tablica, liczbaCyfr, szukanaLiczba);

    return 0;
}
