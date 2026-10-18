// Lecture 22 : Random numbers 

#include <iostream>
#include <ctime> // we need this library to use time related operators

int main(){
    using namespace std;

    //PSEUDO RANDOM : Not truly random (but close)
    // It generates any no. from 1 to commonly 32,767 or 2,147,483,647

    srand(time(NULL));// Use this as it is 

    // Format => datatype variable-name = (rand() % upper limit of your required domain) + 1 ;

    int num1 = (rand() % 6) + 1;// this will give any no. from 1 to 6
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    int num4 = (rand() % 10) + 1;// this will give any no. from 1 to 10
    int num5 = (rand() % 50) + 1;// this will give any no. from 1 to 50
    int num6 = (rand() % 100) + 1;// this will give any no. from 1 to 100

    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3 << '\n';
    cout << num4 << '\n';
    cout << num5 << '\n';
    cout << num6 << '\n';
   
}
