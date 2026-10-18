// Lecture 21 : Nested Loops

// Nested Loop : Basically Loop inside another Loop

#include <iostream>

int main(){

    /*loop{
        loop{
            loop{
            }
            }
            }*/

    for( int i = 1; i <= 3; i++){

        for(int j = 1; j <= 10; j++)// there is this standard naming convention where the inner variable is chosen a j
        {   std::cout << j << ' ';}

        std::cout << '\n';
    }

    return 0;
}