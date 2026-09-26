//Lecture 17 : While loop (An Introduction to loops)

#include <iostream>

int main(){

    // While loop = It is basically an if statement where the input option keeps looping until
    //              you feed your input in the program.
    // format : while(condition/string methods){}

    using std::string;
    string name;

    while(name.empty()){ 

        std::cout << "Please enter your name : ";
        std::getline( std::cin , name);
    }

    std::cout << "Hello "<< name << " !";

    //we can also display a message repeatedly in a loop , if we used a condition in the 
    //domain of while loop which is always true , for example 1=1 , 2=2 , 8+5 = 6+7 etc.

    //lets us try to display a emergency message on loop

    while(1==1 /*a condition which is always true*/){

        std::cout << "EMERGENCY!!!!\n";
    }

    // Lecture 17 ends
    
    return 0;
}