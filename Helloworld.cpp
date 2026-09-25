// Lecture 1 (Introduction to functions , statements and writing our first code)

#include <iostream>
//iostream is a header file which contain functions for basic input and output operations
//by using #include we are including that file
// # is called Pre-processing directive

int main(){
    
    std::cout << "Hello Programming! , My name is Indrajeet Patil." << std::endl;
    //where :: is called scope resolution operator and std is a namespace.
    //which contains all the classes and functions of C++ standard library
    //you have to use std::endl for endline command
    std::cout <<"Lets learn C++ ," << '\n';
    //or simply '\n' for increasing efficiency , but for low latency prefer std::endl

    std::cout <<"here we have learned function like int main(),and in next lecture we will learn variable." << '\n';
    //if we do not use '\n' or << std::endl followed by a ; then there will be no next line
    //Remember std::cout is an object, what is object ? , we will disuss later
    

    //here Lecture 1 ends
    /*also 
    you 
    can
    write like this for multi
    line comment*/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//lecture 2 (Introduction to variables)

    //int datatype (stores Integers numbers)

    int x;//declaration
    x = 2;//assignment
          
    std::cout << x << '\n';

    int y = 6;//here we have done declaration and assignment in a single step
    int z = -3;
    int s = z+y;
    int sum = x+z+s+y;

    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << s << '\n';
    std::cout << sum << '\n';

    //double (number including decimals , stores real numbers)

    double height = 184.432;
    double temperature = 34.533;
    double speed = 67.26356;
    double weight = 86.423;

    std::cout << height << " cm" << std::endl;
    std::cout << temperature << " tempscale" << '\n';
    std::cout << speed << " km/h" << '\n';
    std::cout << weight << " kg" << '\n';

    //char (stores a single character)

    char grade = 'A';/*do not forget to use '-' every time
    when you assign a value in char*/
    char Rank = 'C' ;
    char initials = 'I';
    char currency = '$';
    char number = '9';
    
    std::cout << grade << '\n';
    std::cout << Rank << '\n';
    std::cout << initials<< '\n';
    std::cout << currency<< '\n';
    std::cout << number<< '\n';


    // boolean (True or False)
    // use bool as syntax , gives binary output {0,1}

    bool male = true;//true gives output '1'
    bool winter = false;//false gives output '0'
    bool laptop = true;
    bool work = false;
    bool student = true;


    // string (objects that represents a sequence of text)
    // use std::string as syntax

    std::string name = "Indrajeet Rambhau Patil";
    std::string tempscale = "degree celcius";
    std::string food = "Dosa";

    //An example of usage of variables
    std::cout << "My name is " << name << '\n';
    std::cout << "Temprature is " << temperature << " , on temprature scale of " << tempscale << '\n';
    std::cout << "Is this winters season ? "<< '\n';
    std::cout << winter << '\n';
    std::cout << "My favourite food is "<< food << '\n';
    std::cout << "Do you have a laptop ?"<< '\n';
    std::cout << laptop << '\n';
    std::cout << "My initials are "<< initials << '\n';

    std::cout << "Here Lecture 2 ends and we have got basic introduction to variables "<< std::endl ;
    //Here lecture 2 ends


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//Lecture 3 (Const keyword)

    //The const keyword specifies that a variable's value is constant
    //tells the compiler to prevent anything from modifying it 
    //either it behaves as a mathematical constant

    const double PI = 3.14159; //use upper case letters as it is common naming convention
    const double LIGHT_SPEED = 2.99792458E8;
    const double EULER_CONST = 2.7182818285;
    const double G = 6.67430e-11;
    const double PLANCK_CONST = 6.62607015e-34;
    const double AVOGADRO_CONST = 6.02214076e23;
    


    //Example 1 : Now let us calculate perimeter of a circle
    
    double r = 20;// where 'r' is the distance between two points or radius of a circle/sphere
    double h = 10;// where 'h' is the height
    double perimeter_circle = 2*PI*r;
    
    std::cout << perimeter_circle << " cm"<< std::endl;
    //______________________________________________________________________________________________________________

    //Example 2 : Now let us calculate area of circle

    double area_circle = PI*r*r;

    std::cout << area_circle << " cm^2" << std::endl;
   //_________________________________________________________________________________________________________

   //Example 3 : Now let us calculate area of sphere

    double area_sphere = 4*PI*r*r;

    std::cout << area_sphere << " cm^2"<< '\n';
    //________________________________________________________________________________________________________

    //Example 4 : Now let us calculate volume of sphere

    double volume_sphere = 4/3*PI*r*r*r;

    std::cout << volume_sphere << " cm^3"<< '\n';
    //___________________________________________________________________________________________________

    //Example 5 : Now let us calculate volume of cone 

    double volume_cylinder = PI*r*r*h;

    std::cout << volume_cylinder << " cm^3"<< '\n';
    //__________________________________________________________________________________________________

    //Example 6 : Now let us calculate Energy in mass 'm' through E = mC^2

    double m = 4;

    double E = m*LIGHT_SPEED*LIGHT_SPEED;

    std::cout << E << " joules"<< '\n';
    //__________________________________________________________________________________________________

    //Example 7 : Now let us calculate Energy of a photon through E = h*f

    double f = 6.843242e14; //where 'f' is the frequency of the photon

    double E_photon = PLANCK_CONST*f;

    std::cout << E_photon << " joules"<< '\n';

   //__________________________________________________________________________________________________

   // Example 8 : Now let us calculate the force of gravity between two masses through F = G*m1*m2/r^2

   double m1 = 500e5; //where 'm1' is the mass of first object
   double m2 = 1000e5; //where 'm2' is the mass of second object
   double a = 20; //where 'l' is the distance between two objects

   double F = G*m1*m2/(a*a);

   std::cout << F << " newtons"<< '\n';
   
   std::cout << "Here Lecture 3 ends and we have got basic introduction to const keyword "<< std::endl ;

   //Here Lecture 3 ends

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


    return 0;

    }
