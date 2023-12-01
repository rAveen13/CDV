#include <iostream>
using namespace std;

int i, a, b, element, suma = 0;
int* tab = new int[a];


int main(){
    i = 1;
    a = 0;
    b = 0;
    element = 0;

    while(a <= i){
        cout << "Podaj wielkość tablicy: " << endl;
        cin >> a;
    }

    for(int i = 1; i <= a; i++){
        cout << "Podaj wartość tablicy: " << endl;
        cin >> b;
        tab[i] = b;
    }

    cout << "Zawartość tablicy: ";
    for(i = 1; i <= a; i++){
       cout << tab[i] << ", ";
    }
    cout << endl;


    cout << "Wartość pierwszego elementu tej tablicy wynosi: ";
    cout << tab[1] << endl;
    i = i-1;


    int różnica = tab[i] - tab[1];
    cout << "Różnica między ostatnim, a pierwszym elementem wynosi: " << różnica << endl;


    for(i = 1; i <= a; i++){
        suma += tab[i];
   }

    cout << "Suma wszystkich elementów tablicy wynosi: " << suma << endl;


    while(element <= i){
        cout << "Wprowadź elemnt, który chcesz zobaczyć: " << endl;
        cin >> element;
        break;
    }

    cout << tab[element] << endl;

    delete[] tab;
    return 0;
}

