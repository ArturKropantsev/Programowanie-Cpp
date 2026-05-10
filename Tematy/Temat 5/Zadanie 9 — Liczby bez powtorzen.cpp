#include <iostream>

using namespace std;

int main() {
    int licznik = 0;

    for(int setki = 1; setki <= 9; setki++) {

        for(int dziesiatki = 0; dziesiatki <= 9; dziesiatki++) {

            for(int jednosci = 0; jednosci <= 9; jednosci++) {

                // Sprawdzanie czy cyfry sa rozne
                if(setki != dziesiatki &&
                   setki != jednosci &&
                   dziesiatki != jednosci) {

                    cout << setki
                         << dziesiatki
                         << jednosci << endl;

                    licznik++;
                }
            }
        }
    }

    cout << "Liczb bez powtarzajacych sie cyfr: "
         << licznik << endl;

    return 0;
}
