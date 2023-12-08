#include <iostream>

using namespace std;


void zamienLiczby(int *pLiczba1, int *pLiczba2 )
{
    int temp = *pLiczba1;
    *pLiczba1 = *pLiczba2;
    *pLiczba2 = temp;
    return;
}

int main() {
    int liczba1 = 0;
    int liczba2 = 0;

    cout << "Podaj liczbe nr 1 do analizy: " << endl;

    while (!(cin >> liczba1))
    {
        cout << "Podaj prawidlowa liczbe nr 1: " << endl;
        cin.clear();
        cin.ignore(500, '\n');
    }

    cout << "Podaj liczbe nr 2 do analizy: " << endl;

    while (!(cin >> liczba2))
    {
        cout << "Podaj prawidlowa liczbe nr 2: " << endl;
        cin.clear();
        cin.ignore(500, '\n');
    }

    cout << "Wartosc liczby 1: " << liczba1 << " Adres liczba 1: " << &liczba1 << endl;
    cout << "Wartosc liczby 1: " << liczba2 << " Adres liczba 2: " << &liczba2 << endl;

    zamienLiczby(&liczba1, &liczba2);

    cout << "Wartosc liczby 1: " << liczba1 << " Adres liczba 1: " << &liczba1 << endl;
    cout << "Wartosc liczby 1: " << liczba2 << " Adres liczba 2: " << &liczba2 << endl;


    return 0;
}
