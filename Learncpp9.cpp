//Lecture 9 : Assignment

//A program to calculate the Hypotenuse of a right triangle

#include <iostream>
#include <cmath>

int main(){

    double a;//length of side Base
    double b;//length of side Perpendicular
    double c;//length of side Hypotenuse
    double z;//length of side Hypotenuse

    std::cout << "Enter the length of side Base :";
    std::cin >> a;

    std::cout << "Enter the length of side Perpendicular :";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));//using Pythagoras theorem to calculate the length of Hypotenuse

    //or you can use Hypot function to calculate the length of Hypotenuse

    z = hypot(a,b);//using Hypot function to calculate the length of Hypotenuse

    std::cout << "The length of side Hypotenuse is : " << c << '\n';
    std::cout << "The length of side Hypotenuse (using hypot) is : " << z << '\n';

    return 0;
}


