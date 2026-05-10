#include <iostream>

using namespace std;

int main() {
    // Tablica znakowa na 20 znakow + '\0'
    char tekst[21];

    // Wczytywanie tekstu
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, 21);

    // Wyswietlenie tekstu
    cout << "Wprowadzony ciag znakow: " << tekst << endl;

    return 0;
}
