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

void sortowanieBabelkowe(int *tablica, int liczbaCyfr)
{
    for(int i = 0; i < liczbaCyfr; i++)
        for(int j = 1; j < liczbaCyfr-i; j++)
            if(tablica[j - 1] > tablica[j])
                swap(tablica[j - 1], tablica[j]);
}

int main()
{
    int liczbaCyfr = 0;
    cout << "Ile znakow ma miec tablica: " << endl;
    scanf("%d", &liczbaCyfr);
    int tablica[liczbaCyfr];

    uzupelnijTablice(tablica, liczbaCyfr);
    sortowanieBabelkowe(tablica, liczbaCyfr);
    wypiszTablice(tablica, liczbaCyfr);

    return 0;
}
