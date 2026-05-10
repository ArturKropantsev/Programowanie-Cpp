#include <iostream>

using namespace std;

int main() {
    int tablica[5];

    cout << "Wprowadz 5 liczb calkowitych:\n";

    // Wczytywanie liczb
    for(int i = 0; i < 5; i++) {
        cin >> tablica[i];
    }

    // Zamiana liczb ujemnych na 0
    for(int i = 0; i < 5; i++) {
        if(tablica[i] < 0) {
            tablica[i] = 0;
        }
    }

    // Wyswietlanie tablicy
    cout << "Liczby ujemne zamienione na 0: ";

    for(int i = 0; i < 5; i++) {
        cout << tablica[i];

        if(i < 4) {
            cout << ", ";
        }
    }

    return 0;
}
