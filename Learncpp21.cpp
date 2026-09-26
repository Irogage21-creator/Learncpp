//Project : Creating a number guessing game:

#include <iostream>

int main(){

    using namespace std;
    cout << "GUESS THE NUMBER\n It is between 500 to 1000\n";
    int num;

    //Loop runs untill the user guesses the correct number

    while(true){
        
        cout << "\nEnter your guess : ";
        cin >> num;

        // Check if the input is within the allowed domain
        
        if(num < 500 || num > 1000){

            cout << "Please Enter the input within the given domain !!!!\n";
        }

        else if(num > 736 && num < 800){

            cout << "You're very close, very very close!!!, but your answer is little bigger than the required value \n";
        }

        else if(num <= 600){
            
            cout << "Your number is smaller than the required number!!\n";
        }

        else if(num <= 700){

            cout << "Your number is little smaller than the required number!!\n";
        }

        else if(num > 700 && num < 720){

            cout << "You're very close, very very close!!!, but your answer is little lesser than the required value \n";
        }   

        else if(num >= 800){

            cout << "Your number is Bigger than the required number !\n";
        }

        else if(num >= 720 && num <= 736){

            cout << "Your are guess if correct!!, which is "<< num;

            break;
        }

        else{

            cout << "INVALID INPUT!!!!\n";
            break;
        }
    }
    
    
    return 0;
}

