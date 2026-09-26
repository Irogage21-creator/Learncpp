//Lecture 5 (typedef operator)

// typedef = reserved keyword used to create an additional 
//           (alias) for another data type.
//           New identifier for an existing data-type 
//           helps with readability and reduces typos
//           typedef is strictly used to create aliases for datatypes, 
//           not for objects (like std::cout)
//           only use when there is clear benefit

#include <iostream>

    typedef std::string text_t;/*basically we have changed to 
    std::string operator to a simple to typos text ,also we usually
    write _t at the end as a signifier*/

    //other examples:

    typedef char ch_t;//This should be written outside the function
    typedef bool tf_t;
    typedef int n_t;

    int main()
    {

        text_t name = "Indrajeet";
        ch_t initials = 'I';
        tf_t male = true;
        n_t height = 183;

       
        std::cout << "My height is " << height << " in cm ." << '\n';
        std::cout << "My name is " << name << '\n';
        std::cout << "My initials are " << initials << '\n';
        std::cout << "Am I a male ? " << male << '\n';

        return 0;
    }
