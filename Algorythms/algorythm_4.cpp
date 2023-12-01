#include <iostream>
using namespace std;

int LG, SG, WP, WD, PL, P, WR;
double Pod, KP, W_netto;
int LiczbaGodzin(){
    int GD;

    if (LG > 40){
        GD = LG - 40;

        WP = 40 * SG;
        WD = GD * (2 * SG);
        PL = WP + WD;
    } else {
        PL = LG * SG;
    }
    return PL;
}

int Podatek(){
    cin >> P;

    if (P == 1){
        WR = PL * 52;
        if (WR < 20000){Pod = 0.19; KP = WR - (WR * (1 -  Pod)); W_netto = WR - KP;}else{if(WR >= 20000)
            {Pod = 0.28; KP = WR - (WR * (1 -  Pod)); W_netto = WR - KP;}else{Pod = 0.21; KP = WR - (WR * (1 -  Pod)); W_netto = WR - KP;}
        }
    } else {
        cout << "anulowano" << endl;
        return 0;
    }

    return W_netto;
}

int main(){

cout << "Podaj LG" << endl;
cin >> LG;

cout << "Podaj SG" << endl;
cin >> SG;

WP = LG * SG;

LiczbaGodzin();

cout << PL << endl;

cout << "Przepracowane godziny" << endl;
cout << LG << endl;
cout << "Płaca" << endl;
cout << PL << endl;
cout << "Czy wyliczyć roczne wynagrodzenie i podatek? Tak - wypisz 1, Nie - wypisz 0" << endl;

Podatek();

cout << "Wynagrodzenie roczne: " << WR << endl;
cout << "Podatek " << Pod << endl;
cout << "Kwota podatku " << KP << endl;
cout << "Wynagrodzenie po potrąceniu podatku " << W_netto << endl;

return 0;
}
