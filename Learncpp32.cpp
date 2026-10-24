//Lecture 26 : Overloaded Fx

#include<iostream>

/*Function overloading means creating multiple functions with the same name but different parameter lists. 
The compiler decides which function to call based on the arguments provided.*/

void pizza();
void pizza(std::string topping1);
void pizza(std::string topping1, std::string topping2);


int main(){

    pizza();
    pizza("pepperoni");
    pizza("pepperoni", "mushrooms");
    return 0;
}

void pizza(){

    std::cout << "I like pizza a lot\n";
}
void pizza(std::string topping1){

    std::cout << "I like pizza with "<< topping1 << " topping a lot \n";
}
void pizza(std::string topping1, std::string topping2){
    std::cout << "I like pizza with "<< topping1 << " and "<< topping2 << " topping a lot\n" ;
}