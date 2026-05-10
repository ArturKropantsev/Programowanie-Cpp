#include <iostream>

using namespace std;

int main() {
    char tekst[100];
    char znak;
    int licznik = 0;
    int pozycje[100];

    // Wczytywanie tekstu
    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

    // Wczytywanie znaku
    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    // Szukanie znaku
    for(int i = 0; tekst[i] != '\0'; i++) {
        if(tekst[i] == znak) {
            pozycje[licznik] = i;
            licznik++;
        }
    }

    // Wyswietlenie wyniku
    cout << "Liczba wystapien znaku '" << znak << "': "
         << licznik << endl;

    cout << "Pozycje wystapien: ";

    for(int i = 0; i < licznik; i++) {
        cout << pozycje[i];

        if(i < licznik - 1) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}
