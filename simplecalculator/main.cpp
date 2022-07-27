#include <iostream>

using namespace std;

int main()
{
    cout << "\t simple calculator\n" << endl;
    cout<< "-------------------------------------\n" << endl;
    int num1,num2;
    char maths;
    cout<< "enter your first number :";
    cin >>num1;
    cout << "enter an operator [+,-,*,/]";
    cin >> maths;
    cout << "enter your 2nd number :";
    cin>> num2;
    cout << "\n-------------------------------------\n"<<endl;
    switch(maths){

    case '+':
        cout << "addition of two number is :"<<num1+num2;
            break;
    case '-':
        cout << "subtraction of two number is :"<< num1-num2;
            break;
    case '*':
        cout<< "product of two number is :" << num1*num2;
            break;
    case '/':
        cout << "division of two number is :" <<num1/num2;
            break;

    default:
        cout << "syntax error! "<<endl;
            break;



    }
    return 0;
}

