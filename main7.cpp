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

void sortowanieWybieranieMalejaco(int *tablica, int liczbaCyfr)
{
    int mn_index;
    for(int i = 0; i < liczbaCyfr - 1; i++)
    {
        mn_index = i;
        for(int j = i + 1; j < liczbaCyfr; j++)
            if(tablica[j] > tablica[mn_index])
                mn_index = j;

        swap(tablica[i], tablica[mn_index]);
    }
}

int main() {
    int liczbaCyfr = 20;
    int tablica[liczbaCyfr];

    uzupelnijTablice(tablica, liczbaCyfr);
    sortowanieWybieranieMalejaco(tablica, liczbaCyfr);
    wypiszTablice(tablica, liczbaCyfr);

    return 0;
}
