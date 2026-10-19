// Lecture 23 : Random Event Generator

#include<iostream>
#include<ctime>
int main(){
    using namespace std;

    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch(randnum){

        case 1 : cout << "You have won a Bumper ticker !!!\n";
                    break;
        case 2 : cout << "You have won a 50 percent of coupon !!!\n";
                    break;
        case 3 : cout << "You have won a Supercar !!!\n";
                    break;
        case 4 : cout << "You have won a Dress !!!\n";
                    break;
        case 5 : cout << "You have won a gift card !!!\n";
                    break;
    }
    //Format :
    /*srand(time(0));
    int randnum = rand() % n + 1;
    
    switch(randnum){
    
    case 1 : code
    break;
    case 2 : code 
    break;    |      |
        
    case n : code}
    break;*/
    
    return 0;}
