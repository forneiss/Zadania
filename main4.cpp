#include <iostream>

using namespace std;

int main() {
    int day = 0;
    cin >> day;
    switch (day) {
        case 1:
            cout << "Poniedzialek";
            break;
        case 2:
            cout << "Wtorek";
            break;
        case 3:
            cout << "Srode";
            break;
        case 4:
            cout << "Czwartek";
            break;
        case 5:
            cout << "Piatek";
            break;
        case 6:
            cout << "Sobota";
            break;
        case 7:
            cout << "Niedziela";
            break;
        default:
            cout << "Nie znaleziono dnia tygodnia";

    }
    return 0;
}
