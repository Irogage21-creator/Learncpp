//Lecture 13 : Ternary Operator(Pretty important topic)

// Ternary Operator is a shortcut for if else statement i.e it is an replacement for if else statement
// '? : ' It is also called Conditional Operator
// condition ? expression1 (if true) : expression2 (if false);

#include <iostream>

int main(){

    using std::cout;
    using std::cin;


    //Example 1 : Let's say we want to check whether the selling price is profit or loss

    double price;
    cout << "Enter the price of the selling price : ";
    cin >> price;cout << '\n';

   /*if(price > 1000){        //Ternary Operator is a replacement for this if else statement
        cout << "Profit ";          
    }
    else{
        cout << "Loss ";
    }*/

    //This code can be written in a single line using Ternary Operator

    price > 1000 ? cout << "Profit " : cout << "Loss ";cout << '\n';//Ternary Operator
    //We can also write this code as follows
    cout << (price > 1000 ? "Profit " : "Loss ")<< '\n'; //Ternary Operator

    //Also , let's say we want to calculate the profit or loss amount using Ternary Operator
    
    double amount = price > 1000 ? price - 1000 : 1000 - price; //Ternary Operator to calculate profit or loss

    cout << (price > 1000 ? "Profit Amount : " : "Loss Amount : ") << amount << '\n';



    //Example 2 : Let's say we want to check whether the number is even or odd

    int num;
    cout << "Enter a number : ";
    cin >> num; cout << '\n';

    /*if(num % 2 == 0){        //Ternary Operator is a replacement for this if else statement
        cout << "Even ";          
    }
    else{
        cout << "Odd ";
    }*/

    num % 2 == 0 ? cout << "Even ": cout << "Odd ";cout << '\n'; //Ternary Operator
    //We can also write this code as follows
    cout << (num % 2 == 0 ? "Even " : "Odd ")<< '\n'; //Ternary Operator

    return 0;

    // Lecture 13 ends 

}