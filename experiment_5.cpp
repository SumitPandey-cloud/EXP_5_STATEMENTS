//sumit pandey
//experiment 5
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    char operation;
    int sub,prod,sum;

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
     
    cout<<"Enter the OPERATION you want to perform"<<endl;
    cin>>operation;

    sum=a+b;
    sub=a-b;
    prod=a*b;
    
    switch (operation){

        case '+':
        cout<<"Addition for your entered value is:"<<sum<<endl;
        break;

        case '-':
        cout<<"Subtraction for your entered value is:"<<sub<<endl;
        break;

        case '*':
        cout<<"Multiplication for your entered value is:"<<prod<<endl;
        break;
         
         }

         return 0;

    }
  
    
    