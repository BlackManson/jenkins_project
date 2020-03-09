#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double delta, x1, x2;
    int a, b, c;

    cout << "Podaj a, b, c: ";
    cin >> a >> b >> c;

    if(a==0){
        cout << "To nie jest  funkcja kwadratowa";
    }
    else{
        delta = (b*b) - (4*a*c);
        cout << "Delta: " << delta;

        if(delta < 0){
            cout << "Brak miejsc zerowych";
        }
        else{
            if(delta > 0){
                x1 = ((-b) - sqrt(delta)/ (2*a));
                x2 = ((-b) + sqrt(delta)/ (2*a));
                cout << "X1: " << x1;
                cout << "X2: " << x2;
            }
            else{
                x1 = (-b) / (2*a);
                cout << "X1: " <<x1;
            }
        }
    }
}