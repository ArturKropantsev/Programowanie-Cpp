#include <iostream>

using namespace std;

int main() {
    int tablica[5];
    int suma = 0;
    double srednia;

    // Wczytywanie liczb
    for(int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Obliczanie sumy
    for(int i = 0; i < 5; i++) {
        suma += tablica[i];
    }

    // Obliczanie sredniej
    srednia = (double)suma / 5;

    // Wyswietlenie wyniku
    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}
