#include <iostream>

using namespace std;

int main() {
    int tablica[10];

    cout << "Podaj 10 liczb calkowitych:\n";

    // Wczytywanie liczb
    for(int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Zakladamy, ze pierwszy element jest najmniejszy
    int min = tablica[0];

    // Szukanie najmniejszej liczby
    for(int i = 1; i < 10; i++) {
        if(tablica[i] < min) {
            min = tablica[i];
        }
    }

    // Wyswietlenie wyniku
    cout << "Najmniejsza liczba to: " << min << endl;

    return 0;
}
