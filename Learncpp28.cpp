//Lecture 24 : User defined functions (void)Part 1 :

#include<iostream>

//function = a block of reusable code

void goodmorning(){//format void function()
    //Also generally the function is written before the main function

    std::string name;
    std::cout << "Enter your name : ";
    std::getline(std::cin , name);

    std::cout << "Good Morning "<< name << " !!";

}
int main(){

    goodmorning();//this is called INVOKING or CALLING  a fx in the main fx
    goodmorning();//You can invoke the fx as many times as you want
    
    return 0;
}



