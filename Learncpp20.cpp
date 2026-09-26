// Lecture 19 : For Loop

#include <iostream>

int main(){

// A for loop in C++ is a control structure used to repeat a block of code,
// a specific number of times or while a condition remains true.

/* Format : for(initialization; condition; update){
                   // code to repeat
                }*/

// Let us make a simple example's :
// index = i 

// Example 1 :

    for(int i = 1; i <= 10 ; i++){

        std::cout << "Countdown : "<< i << '\n';
    }

// Example 2 : 

    for(int i = 10; i >= 1 ; i--){

        std::cout << "Countdown : "<< i << '\n';
    }

// Example 3 : 

    for(int i = 1; i <= 20 ; i+=3){

        std::cout << "Countdown : "<< i << '\n';
    }

// Exampple 4 : 

    for(int i = 30; i >= 0 ; i-=4){

        std::cout << "Countdown : "<< i << '\n';
    }

// Assignment :

    //Lecture 19 ends

    return 0;
}


