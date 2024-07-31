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
```
# OUTPUT
![experiment_5_a_output](https://github.com/user-attachments/assets/406b5612-19b8-4ea8-89de-e10e13e64e6a)

# CONCLUSION

Learnt how to use if,else and esle if statement in c++.

