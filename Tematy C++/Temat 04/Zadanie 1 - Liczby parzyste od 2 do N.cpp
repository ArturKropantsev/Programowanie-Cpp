#include <iostream>
using namespace std;

int main(){

    int n;
    int i = 2;

    cout << "Podaj liczbe N: ";
    cin >> n;

    cout << endl;
    cout << "Liczby parzyste od 2 do " << n << ":" << endl;

    while(i <= n){
        cout << i << endl;
        i += 2;
    }

    return 0;
}
