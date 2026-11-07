//Project : Rock Paper Scissors game :

#include<iostream>
#include<ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){
    char player;
    char computer;
    
    player = getuserchoice();
    std::cout << "Your choice is : ";
    showchoice(player);
    std::cout << '\n';

    computer = getcomputerchoice();
    std::cout << "Computer's choice is : ";
    showchoice(computer);
    std::cout << '\n';

    choosewinner(player , computer);


    return 0;
}
char getuserchoice(){

    char player;
    
    do{std::cout << "\nRock Paper Scissors Game!!!\n";
    std::cout << "****************************\n";
    std::cout << "Press :\n";
    std::cout << "r for Rocks\n";
    std::cout << "p for Papers\n";
    std::cout << "s for Scissors\n";
    
    std::cout << "Enter Your Choice : \n";
    std::cin >> player;}while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getcomputerchoice(){

    srand(time(0));
    
    int computer = (rand()%3) + 1;

    switch(computer){

        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's';
    }
    return computer;
}
void showchoice(char choice){

    std::cout << choice;
}
void choosewinner(char player, char computer){
    switch(player){

        case 'r' : if(computer == 'r'){
            std::cout << "It is a draw!!";}
            else if(computer == 'p'){
                std::cout << "You have lost!!";}
                else{std::cout << "You have Won!!";}
                break;
        
        case 'p' : if(computer == 'p'){
            std::cout << "It is a draw!!";}
            else if(computer == 's'){
                std::cout << "You have lost!!";}
                else{std::cout << "You have Won!!";}
                break;

        case 's' : if(computer == 's'){
            std::cout << "It is a draw!!";}
            else if(computer == 'r'){
                std::cout << "You have lost!!";}
                else{std::cout << "You have Won!!";}
        break;
}}