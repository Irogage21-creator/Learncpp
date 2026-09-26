//Lecture 12 : Project 1 : Simple 2 Number Calculator :

#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "*****************SIMPLE 2 NUMBER CALCULATOR*****************"<< '\n';

    char op;
    double num1;
    double num2;
    double result;

    cout << "Enter the operator (+, -, *, /, p): ";
    cin >> op;
    cout << endl;

    cout << "Enter Num1 : ";
    cin >> num1;
    cout << endl;

    cout << "Enter Num2 : ";
    cin >> num2;
    cout << endl;

    switch(op){

        case '+':
            result = num1 + num2;
            cout << "Result : "<< result << '\n';
            break;

        case '-':
            result = num1 - num2;
            cout << "Result : "<< result << '\n';
            break;

        case '*':
            result = num2*num1;
            cout << "Result : "<< result << '\n';
            break;

        case '/':
            result = num1/num2;
            cout << "Result : "<< result << '\n';
            break;

        case 'p':
            result = pow(num1 , num2);
            cout << "Result : "<< result << '\n';
            break;

        default:
            cout << "You have used INVALID OPERATOR !\n";
        }


    cout << "******************************************************************************************************************************************";

    return 0;

    //Lecture 12 ends
}