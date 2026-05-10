#include <iostream>
using namespace std;

int main(){

    int n;
    int suma = 0;
    int i = 1;

    cout << "Podaj liczbe N: ";
    cin >> n;

    while(i <= n){
        suma += i;
        i++;
    }

    cout << endl;
    cout << "Suma liczb naturalnych do " << n << ": " << suma;

    return 0;
}
