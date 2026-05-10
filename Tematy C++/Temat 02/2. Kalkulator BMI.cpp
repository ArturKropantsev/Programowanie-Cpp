#include <iostream>
using namespace std;

int main(){

    double waga, wzrost, bmi;

    cout << "Podaj wage (w kg): ";
    cin >> waga;

    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;

    bmi = waga / (wzrost * wzrost);

    cout << endl;
    cout << "Twoje BMI wynosi: " << bmi << endl;

    if(bmi < 18.5){
        cout << "Twoj stan wagowy: Niedowaga";
    }
    else if(bmi >= 18.5 && bmi <= 24.9){
        cout << "Twoj stan wagowy: W normie";
    }
    else if(bmi >= 25 && bmi <= 29.9){
        cout << "Twoj stan wagowy: Nadwaga";
    }
    else{
        cout << "Twoj stan wagowy: Otylosc";
    }

    return 0;
}
