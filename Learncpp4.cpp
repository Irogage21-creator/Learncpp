//In modern c++ typedef is replaced with 'using' (work better with templates)

#include <iostream>

using text_t = std::string;
using n_t = int;
using tf_t = bool;
using ch_t = char;


int main(){

    text_t name = "Indrajeet";
    ch_t initials = 'I';
    tf_t male = true;
    n_t height = 183;

    std::cout << "My name is "<< name << '\n';
    std::cout << "My initials are " << initials << '\n';
    std::cout << "Am I a male ? "<< male << '\n';
    std::cout <<"My height is "<< height << " in cm ." << '\n';

    /*'Using' operator is also has an advantage over typedef because it is not limited to datatypes,
    but datatypes should be written outside the function.*/

    using std::cout;

    cout << '\n';
    cout << "My name is "<< name << '\n';
    cout << "My initials are " << initials << '\n';
    cout << "Am I a male ? "<< male << '\n';
    cout <<"My height is "<< height << " in cm ." << '\n' << '\n';

    cout << "here lecture 5 ends!" << std::endl;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Lecture 6 (Arithematic Operators)

// arithematic operators = return the results of a specific
//                         arithematic operations (+ - * /)

    //Addition :

    int oranges = 5;
    oranges = oranges + 1;//standard way to write + operator
    cout << oranges << '\n';

    int apples = 9;
    apples+=3 ; /*modern norm to write + operator , note that there is no gap b/w 
    variable , + , = and number , (variable+=number) .*/
    cout << apples << '\n';


    //Subtraction :

    int cars = 21;
    cars = cars - 3 ;//standard way to write - operator
    cout << cars << '\n';

    int caps = 12 ;
    caps-=10;/*modern norm to write - operator , note that there is no gap b/w 
    variable , - , = and number , (variable-=number) .*/
    cout << caps << '\n';


    //Multiplication :

    int flags = 4;
    flags = flags * 2;//standa+r+d way to write * operator
    cout << flags << '\n';

    int cups = 6 ;
    cups*=5;/*modern norm to write * operator , note that there is no gap b/w 
    variable , - , = and number , (variable*=number) .*/
    cout << cups << '\n';


    //Division :

    double roses = 9;//always use double datatype in division operator
    roses = roses / 3;//standard way to write / operator
    cout << roses << '\n';

    double mango = 12;
    mango/=5;/*modern norm to write / operator , note that there is no gap b/w 
    variable , - , = and number , (variable/=number) .*/
    cout << mango << '\n';


    //modulus operator % (or say remainder operator):

    //gives remainder of any division

    int remainder = 2134 % 7;
    cout << remainder << '\n';


    //these operators offcourse follows BODMAS;

    double calculation = (3*65-9.65+6)/5+5/9+(0.63*9-85+65325)/5;
    cout << calculation << '\n';


    cout << "here lecture 6 ends!" << std::endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Lecture 7 (Type conversions )

//converting a value of one datatype to a value of other datatype
//Implicit = automatic
//Explicit = precede the value of new datatype in paranthesis (int) value;

    int pi = 3.14;
    cout << pi << '\n';//this will only print 3 not 3.14 , because of int datatype,this is an implicit conversion;

    double x = (int) 4.53;
    cout << x << '\n';//this should have printed 4.53 ,but will print 4 ,because we have used (int), therefore this is called explicit;
    
    int y = 100;
    cout << (char)y << '\n';//this will print 'd' because we have used (char),note that (char) must be used in print code;


    //We can calculate percentage using this conversion techniques , suppose we want to calculate accuracy percentage of a student 
    //in a certain examination.

    int correct = 17;
    int question = 20;

    int percentage_accuracy = (double)correct/question * 100;

    cout << percentage_accuracy << "%" << '\n';//accuracy percentage of a student is 85% ;

    cout << "here lecture 7 ends!" << std::endl;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    return 0 ;
}


