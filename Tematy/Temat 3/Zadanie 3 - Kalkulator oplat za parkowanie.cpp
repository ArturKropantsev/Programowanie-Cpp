#include <iostream>
using namespace std;

int main(){

    int godziny;
    char pojazd;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;

    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;

    switch(pojazd){

        case 'S':
            cout << "Oplata za parkowanie: " << godziny * 5 << " zl";
            break;

        case 'M':
            cout << "Oplata za parkowanie: " << godziny * 3 << " zl";
            break;

        case 'A':
            cout << "Oplata za parkowanie: " << godziny * 10 << " zl";
            break;

        default:
            cout << "Blad!";
            break;
    }

    return 0;
}
