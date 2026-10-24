//Lecture 27 : Variable scope :

//Local variables = declared inside a functions or block {}
//Global variables = declared outside of all functions

#include<iostream>

int mynum = 4; //this is a global variable, as it is decalred outside of all functions including the main fx
//Its best to avoid global variables if you can, b'xoz it pollutes the global namespace and is also much less secure
//Also Local variables are much more secure, b'coz fxs cannot see inside other functons
void printmynum();
int main(){

    int mynum = 3;//this is local variable
    
    printmynum();
    std::cout << mynum << '\n';
    // A function will use any local variable first before resorting to any global variable
    std::cout << ::mynum << '\n';//Also you can use your global variable by using sope resoultion oprator :: before your global variable


    return 0;
}
void printmynum(){

    int mynum = 6;

    std::cout << mynum << '\n';
}
