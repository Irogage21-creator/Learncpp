//Project : Creating a number guessing game:

#include <iostream>

int main(){

    std::cout << "GUESS THE NUMBER\n It is between 500 to 1000\n";
    int num;

    //Loop runs untill the user guesses the correct number

    while(true){
        
        std::cout << "\nEnter your guess : ";
        std::cin >> num;

        // Check if the input is within the allowed domain
        
        if(num < 500 || num > 1000){

            std::cout << "Please Enter the input within the given domain !!!!\n";
        }

        else if(num > 736 && num < 800){

            std::cout << "You're very close, very very close!!!, but your answer is little bigger than the required value \n";
        }

        else if(num <= 600){
            
            std::cout << "Your number is smaller than the required number!!\n";
        }

        else if(num <= 700){

            std::cout << "Your number is little smaller than the required number!!\n";
        }

        else if(num > 700 && num < 720){

            std::cout << "You're very close, very very close!!!, but your answer is little lesser than the required value \n";
        }   

        else if(num >= 800){

            std::cout << "Your number is Bigger than the required number !\n";
        }

        else if(num >= 720 && num <= 736){

            std::cout << "Your are guess if correct!!, which is "<< num;

            break;
        }

        else{

            std::cout << "INVALID INPUT!!!!\n";
        }}
    
    
    return 0;
}

