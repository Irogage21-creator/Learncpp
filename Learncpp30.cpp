//Lecture 25 : Return keyword (Part 1):


// return = returns a value back to the spot 
//          where you called the encompassing fx

//Lets understand this with a program that will calculate the area of a sqare

#include<iostream>
#include<cmath>

double square(double a);
double cube(double a);

int main(){

    using namespace std;

    double a;//This variable will store side length
    cout << "Enter the side length of the square or cube : ";
    cin >> a;
    double area = square(a);//this variable will store area
    double volume = cube(a);//this variabel will store volume 
    
    cout << "Area of your square of side length " << a << "m is : "<< area << " m^2\n";
    cout << "Volume of your cube of side length " << a << "m is : "<< volume << " m^3\n";


    return 0;
}
double square(double a){//we have changed the datatype from void to double b'coz we want to return a double datatype variable
    //if it was a int , char , string , or any other datatype, then we would have used that respective datatype
    double result = pow(a,2); //creating a temporary variable
    return result;// we could do this in a single line of code 
    //return a*a; 
}
double cube(double a){
    return pow(a,3);
}