//Lecture 4 (Namespaces)
//Namespace = Provides a solution for preventing name conflicts
//            Each entity needs a unique name. A namespace allows for identically 
//            named entities as long as the namespace is different.

#include <iostream>

namespace first{ //namespaces are always places outside of the function
    int x = 1;
}
namespace second{
    int x = 2;
}


int main(){

    std::cout << first::x << std::endl; //this operator will print the variable x from the first namespace as 1
    std::cout << second::x << std::endl; //this operator will print the variable x from the second namespace as 2



    using namespace first;  
    /*This 'using' operator is used to change the variables value permanently to a particular
    namespace or to skip writing std:: operator repeatedly and save our time*/

    std::cout << x << '\n';
    /*this will print 1 , because we have changed our operator to namespace first and now we
    do not need to specify everytime first , or simply here we have skipped first::x */

    std::cout << first::x << '\n';
    /*this offcourse will print 1 as we have specified first::x */

    std::cout << second::x << '\n';
    /*this will print 2 not 1 as we have specified second::x */


    //some further examples of 'using' operator 
    //using std::string; //this will allow us to use string without std:: operator
    //using std::cout; //this will allow us to use cout without std:: operator

    using std::string;
    using std::cout;

    string name = "Indrajeet Rambhau Patil .";/*This is equivalent to variable 
    std::string name = "Indrajeet Rambhau Patil", 
    and we have bypassed std:: operator which saves our typing time .*/
    
    cout << "My name is " << name << '\n'; 
    /*This is equivalent to variable 
    std::cout << "My name is " << name << '\n' */
    
    return 0;
}  
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
