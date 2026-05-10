#include <iostream>

using namespace std;

int main() {
    int macierz[2][3];
    int transpozycja[3][2];

    // Wczytywanie macierzy
    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:\n";

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla wiersza "
                 << i + 1
                 << ", kolumny "
                 << j + 1
                 << ": ";

            cin >> macierz[i][j];
        }
    }

    // Tworzenie transpozycji
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            transpozycja[j][i] = macierz[i][j];
        }
    }

    // Wyswietlanie transponowanej macierzy
    cout << "\nTransponowana macierz:\n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << transpozycja[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
