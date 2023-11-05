#include <iostream>
#include <string>

using namespace std;
int main()
{
    string pierwszy = "piatek";
    string drugi = "piateczek";
    if (pierwszy.compare(drugi) != 0)
        cout << "Wyrazy nie sa takie same" << endl;
    string trzy = pierwszy + drugi;
    cout << "Napisu po zlaczeniu to: " << trzy << endl;
    cout << "Dlugosc napisu piatek to: " << pierwszy.size() << endl;
    cout << "Dlugosc napisu piateczek: " << drugi.size() << endl;
    string pierwszySpacja = pierwszy.append(" ");
    cout << "Dlugosc napisow po dodaniu spacji: " << pierwszySpacja.size() + drugi.size() << endl;
    cout << "Dlugosc po zlaczeniu: " << trzy.size() << endl;

    return 0;
}

