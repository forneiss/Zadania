#include <iostream>

using namespace std;
long silnia(int n);
int potega(int x, int y);


int main()
{
    int n;
    cout << "Podaj liczbe do obliczenia silni: " << endl;
    cin >> n;
    cout << "Silnia = " << silnia(n) << endl;

    int x, y;
    cout << "Podaj liczbe do spotegowania: " << endl;
    cin >> x;
    cout << "Podaj wykladnik potegi: " << endl;
    cin >> y;
    cout << "Wynik: " << potega(x, y) << endl;


    return 0;
}

long silnia(int n)
{
    if(n < 2)
        return 1;

    return n* silnia(n-1);
}

int potega(int x, int y)
{
    if(y==0)
        return 1;
    else if (y<0)
        return 0;
    else
        return potega(x,y-1) * x;
}

