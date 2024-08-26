## EXPERIMENT 5 
# AIM 
To study and implement C++ decision making statements

# SOFTWARE
VS CODE

# THEORY
if statement:

Executes a block of code if a condition is true.
Syntax: if (condition) { code }


if-else statement:

Executes one block if the condition is true, another if it's false.
Syntax: if (condition) { code1 } else { code2 }


else-if ladder:

Checks multiple conditions in sequence.
Syntax: if (condition1) { } else if (condition2) { } ... else { }


switch statement:

Selects one of many code blocks to execute based on a variable's value.
Useful for multiple cases of a single variable.
Syntax: switch(variable) { case value1: code1; break; case value2: code2; break; ... default: code; }

# CODE 
```
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
```
# OUTPUT
![image](https://github.com/user-attachments/assets/88d67fa5-0e33-49b6-89e5-03e061239c57)

# CONCLUSION

Learnt how to use if,else and else if statement in c++.

