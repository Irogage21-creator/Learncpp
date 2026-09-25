//Lecture 8 :Some Mathematical functions

#include <iostream>
#include <cmath>//library for mathematical functions

int main(){
    
    double x = 2.5;
    double y = 3.14;
    double z;
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;
    double h;

    z = std::max(x,y);//max function , it is in iostream library
    a = std::min(x,y);//min function , it is in iostream library
    b = pow(2,7);//pow function ,it raises the power as std::pow(w,e) as w^e it is in cmath library
    c = sqrt(25);//sqrt function , it is in cmath library
    d = abs(-5);//abs function ,it is basically modulus function , it is in cmath library
    e = round(2.6);//round function , it rounds the number to nearest integer , it is in cmath library
    f = ceil(2.1);//ceil function , it rounds the number to next integer , it is in cmath library
    g = floor(2.9);//floor function , it rounds the number to previous integer , it is in cmath library
    h = hypot(3,4);//hypot function , it calculates the hypotenuse of a right triangle , it is in cmath library


    std::cout << "Max of x and y is :"<< z << '\n';
    std::cout << "Min of x and y is :"<< a << '\n';
    std::cout << "2 raised to power 7 is :"<< b << '\n';
    std::cout << "Square root of 25 is :"<< c << '\n';
    std::cout << "Absolute value of -5 is :"<< d << '\n';
    std::cout << "Round of 2.6 is :"<< e << '\n';
    std::cout << "Ceil of 2.1 is :"<< f << '\n';
    std::cout << "Floor of 2.9 is :"<< g << '\n';
    std::cout << "Hypotenuse of right triangle with sides 3 and 4 is :"<< h << '\n';

    return 0;

    //for more mathematical functions refer to this link : https://www.cplusplus.com/reference/cmath/


    //Lecture 8 ends
}

