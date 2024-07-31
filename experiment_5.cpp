//sumit pandey
//experiment 5
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    

    cout << "Enter three numbers (a, b, c):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
   
    if (a >= b && a >= c) {
        cout << "The greatest number is a: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The greatest number is b: " << b << endl;
    } else {
        cout << "The greatest number is c: " << c << endl;
    }
    
    return 0;
}