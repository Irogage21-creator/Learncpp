//Assignment : A privacy password

#include <iostream>
#include <cstdlib> //import this library for system() function


int main(){

    using std::string;
    string pd;
    
    while(pd.empty()){
    std::cout << "Enter the passcode : ";
    std::getline(std::cin , pd);}

    if(pd == "indru21"){//this code indicates that passcode is indru21
        system("start https://www.learncpp.com/");//this code will open learncpp.com
        
        //format : system("start link")
       }

    else{ 
        std::cout << "You have entered a wrong passcode !!!";
       } 
    
    

    return 0;
}

//Assignment ends
