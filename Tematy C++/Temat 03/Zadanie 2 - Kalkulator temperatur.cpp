#include <iostream>
using namespace std;

int main(){

    double celsius;
    char wybor;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    switch(wybor){

        case 'K':
            cout << "Temperatura w Kelvinach: " << celsius + 273.15;
            break;

        case 'F':
            cout << "Temperatura w stopniach Fahrenheita: " << (celsius * 9 / 5) + 32;
            break;

        default:
            cout << "Blad!";
            break;
    }

    return 0;
}
