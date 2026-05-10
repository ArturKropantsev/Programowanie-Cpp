#include <iostream>
using namespace std;

int main(){

    int punkty;

    cout << "Podaj wynik egzaminu (liczba punktow): ";
    cin >> punkty;

    if(punkty < 0 || punkty > 100){
        cout << "Bledne dane.";
    }
    else if(punkty >= 0 && punkty <= 49){
        cout << "Ocena: Niedostateczna";
    }
    else if(punkty >= 50 && punkty <= 69){
        cout << "Ocena: Dostateczna";
    }
    else if(punkty >= 70 && punkty <= 84){
        cout << "Ocena: Dobra";
    }
    else if(punkty >= 85 && punkty <= 99){
        cout << "Ocena: Bardzo dobra";
    }
    else if(punkty == 100){
        cout << "Ocena: Celujaca";
    }

    return 0;
}
