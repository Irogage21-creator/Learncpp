//Lecture 18 : Do While loop

#include <iostream>

int main(){

    // do while loop = do some block of code first , 
    //                  THEN repeat again if condition is true

    // Format : do{code}while(condition/string method);
    
    int number;
    
    /*let us first try to make do while loop from while loop*/

    /*std::cout << "Enter a positive no. : ";
    std::cin >> number;

    while(number < 0 ){
        std::cout << "Enter a positive no. : ";
        std::cin >> number;
    }

    std::cout << "This no. is : "<< number;*/

    do{
        std::cout << "Enter a positive no. : ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "This no. is : "<< number;



    return 0;

    //Lecture 18 ends
}