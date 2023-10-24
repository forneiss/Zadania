#include <iostream>
#define INT_SIZE sizeof(int) * 8
using namespace std;


void zliczBity(int liczba)
{
    int licznikWystapien = 0;

    for(int i = INT_SIZE; 1 <= i; i--)
    {
        if ((liczba & 1) == 1) licznikWystapien++;

        liczba >>= 1;
    }

    cout << "Liczba jedynek: " << licznikWystapien << endl;

    if(licznikWystapien % 2 == 0)
    {
        cout << "Liczba jedynek jest parzysta" << endl;
    } else
    {
        cout << "Liczba jedynek jest nieparzysta" << endl;
    }

}

int main() {
    int liczba;

    cout << "Podaj liczbe do analizy: " << endl;

    while (!(cin >> liczba))
    {
        cout << "Podaj prawidlowa liczbe: " << endl;
        cin.clear();
        cin.ignore(500, '\n');
    }

    zliczBity(liczba);

    return 0;
}
