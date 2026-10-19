//Project : Creating a simple number guessing game with the help of Random variables

#include<iostream>
#include<ctime>

int main(){
    using namespace std;

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout << "*************NUMBER GUESSING GAME*************\n";

    do{
        cout << "Enter Your guess (It should be between 1 to 100): ";
        cin >> guess;
        tries++;

        if(guess < num){
            cout << "your guess is too low\n";
        }
        else if(guess > num){
            cout << "your guess is too high\n";
        }
        else{cout << "Your's guess is correct which is "<< guess << " and it took you "<< tries << " guesses \n";}
    
    }while(guess != num);

    cout << "***********************************************";

     
    return 0;
}