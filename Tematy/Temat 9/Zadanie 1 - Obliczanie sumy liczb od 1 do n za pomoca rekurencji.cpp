#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    return n;
}

int CalculateSumRecursive(int n) {
    if (n == 1) {
        return 1;
    }

    return n + CalculateSumRecursive(n - 1);
}

void DisplayResult(int n, int wynik) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << wynik << endl;
}

int main() {
    int n = GetNumberFromUser();

    int wynik = CalculateSumRecursive(n);

    DisplayResult(n, wynik);

    return 0;
}
