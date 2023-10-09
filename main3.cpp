#include <iostream>

using namespace std;

int main() {
    int i = 0;
    cin >> i;

    //liczba jednosci
    int j = i % 10;
    //liczba dziesiatek
    int d = i / 10 % 10;
    //liczba setek
    int s = i / 100 % 10;

    cout << "Twoja liczba ma " << s << " setek i " << d << " dziesiatek oraz " << j << " jednosci" << endl;
    return 0;
}
