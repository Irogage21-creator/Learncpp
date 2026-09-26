//Lecture 10 :if , else if , else statement:

// if statement is used to execute a block of code if a specified condition is true.
// else if statement is used to specify a new condition to test, if the first condition is false.
// else statement is used to execute a block of code if none of the previous conditions are true.

//order of execution: if -> else if -> else

#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int age ;

   cout << "Enter your age: ";
   cin >> age;
   cout << endl;

    if (age > 100){cout << "Sorry Gramps you are too old to use our service! " << endl;}
    else if (age >= 18){cout << "Welcome to our website! enjoy your stay! " << endl;}
    else if (age < 0) {cout << "You are not born yet! " << endl;}
    else if (age < 18 ){cout << "You are not allowed to enter this website! " << endl;}
    else {cout << "Invalid input! " << endl;}//this else statement is optional,
    // it will execute if none of the previous conditions are true.
    //here we have already covered all the possible conditions so this else statement will never execute.

    return 0;
}
