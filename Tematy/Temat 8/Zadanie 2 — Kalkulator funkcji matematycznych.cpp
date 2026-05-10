#include <iostream>
using namespace std;

double Suma(double a, double b) {
    return a + b;
}

double Roznica(double a, double b) {
    return a - b;
}

double Iloczyn(double a, double b) {
    return a * b;
}

double Iloraz(double a, double b) {
    return a / b;
}

int main() {
    int wybor;
    double a, b;

    do {
        cout << "Wybierz funkcje:\n";
        cout << "1. Suma\n";
        cout << "2. Roznica\n";
        cout << "3. Iloczyn\n";
        cout << "4. Iloraz\n";
        cout << "0. Wyjscie\n";

        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;

        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (wybor) {
            case 1:
                cout << "Wynik: " << Suma(a, b) << endl;
                break;

            case 2:
                cout << "Wynik: " << Roznica(a, b) << endl;
                break;

            case 3:
                cout << "Wynik: " << Iloczyn(a, b) << endl;
                break;

            case 4:
                cout << "Wynik: " << Iloraz(a, b) << endl;
                break;

            default:
                cout << "Niepoprawny wybor." << endl;
        }

        cout << endl;

    } while (true);

    return 0;
}
