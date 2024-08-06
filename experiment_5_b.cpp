#include<iostream>
using namespace std;
int main()
{

    int num1,num2;
    int sum,sub,prod;
    char operation;

    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"Enter the OPERATION you want to perform"<<endl;
    cin>>operation;

    sum=num1+num2;
    sub=num1-num2;
    prod=num1*num2;
    
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
  

    







