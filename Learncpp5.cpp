//Chapter 7 (Insertion and Extraction operator)

// << (insertion operator)
// >> (extraction operator)
// cout (character output)
// cin (character input)


#include <iostream>

int main(){

    std::string name;//why are we doing this?
    int age;//???

    std::cout << "What is your name ? " << '\n';
    std::cin >> name ;/*In cin object , we declare variable(offcourse with its datatype) ,
    because here we basically ask questions */

    std::cout << "What is your age ?" << '\n';
    std::cin >> age ;


    std::cout << "Hello "<< name << '\n';//let this be 1
    std::cout << "You are "<< age << " year's old." << '\n';//let this be 2


    //but there is just one problem , if you type in a string that has spaces ,
    //when we get spaces we stop reading that string 
    //when we type in our full name in the question, we get this output 
    //What is your name ? 
    //Indrajeet Patil 
    //What is your age ?
    //Hello Indrajeet //Notice how the what is your age input has been skipped
    //You are 0 year's old 



    //therefore we need a new function called 'new line function'

    
 return 0;
}
