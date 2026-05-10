#include <iostream>
using namespace std;

int main(){

    int n;
    int licznik = 0;
    int i = 1;

    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> n;

    do{

        if(i % 2 == 0){
            licznik++;
        }

        i++;

    }while(i <= n);

    cout << "Liczba liczb parzystych od 1 do " << n << " wynosi: " << licznik;

    return 0;
}
