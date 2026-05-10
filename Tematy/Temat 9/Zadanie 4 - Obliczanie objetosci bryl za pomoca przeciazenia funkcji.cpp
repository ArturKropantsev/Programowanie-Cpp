#include <iostream>
using namespace std;

// Szescian
double CalculateVolume(double a) {
    return a * a * a;
}

// Prostopadloscian
double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

// Walec
double CalculateVolume(double r, int h) {
    return 3.1415 * r * r * h;
}

void DisplayResult(double wynik) {
    cout << "Objetosc wynosi: " << wynik << endl;
}

int main() {
    int wybor;

    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;

    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    if (wybor == 1) {
        double a;

        cout << "Podaj dlugosc boku: ";
        cin >> a;

        double wynik = CalculateVolume(a);

        DisplayResult(wynik);
    }
    else if (wybor == 2) {
        double a, b, h;

        cout << "Podaj dlugosc: ";
        cin >> a;

        cout << "Podaj szerokosc: ";
        cin >> b;

        cout << "Podaj wysokosc: ";
        cin >> h;

        double wynik = CalculateVolume(a, b, h);

        DisplayResult(wynik);
    }
    else if (wybor == 3) {
        double r;
        int h;

        cout << "Podaj promien: ";
        cin >> r;

        cout << "Podaj wysokosc: ";
        cin >> h;

        double wynik = CalculateVolume(r, h);

        DisplayResult(wynik);
    }
    else {
        cout << "Niepoprawny wybor." << endl;
    }

    return 0;
}
