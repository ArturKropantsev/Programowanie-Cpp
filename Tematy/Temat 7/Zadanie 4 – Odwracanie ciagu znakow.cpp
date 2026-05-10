#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char tekst[100];
    char odwrocony[100];

    // Wczytywanie tekstu
    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

    // Obliczanie dlugosci tekstu
    int dlugosc = strlen(tekst);

    // Odwracanie tekstu
    for(int i = 0; i < dlugosc; i++) {
        odwrocony[i] = tekst[dlugosc - 1 - i];
    }

    // Dodanie znaku konca ciagu
    odwrocony[dlugosc] = '\0';

    // Wyswietlenie odwroconego tekstu
    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}
