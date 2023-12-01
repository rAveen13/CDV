#include <iostream>

using namespace std;

int n, wynik = 1;

int main()
{
    cout << "Podaj liczbę do obliczenia silnii" << endl;
    cin >> n;

    for (int i = 1; i <= n; ++i){
       wynik *= i;
    }

    cout << "Silnia z " << n << " wynosi: " << wynik << endl;

    return 0;
}
