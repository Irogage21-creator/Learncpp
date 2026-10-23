//Lecture 25 : Part 2

//creating a program that adds users first name and last name, creating a new full name string

#include<iostream>

using namespace std;

string concatstrings(string string1 , string string2);

int main(){

    string firstname , lastname , fullname;
    
    cout << "Enter your First name : ";
    cin >> firstname;
    cout << "Enter your Last name or Sir name : ";
    cin >> lastname;

    fullname = concatstrings(firstname , lastname);

    cout << "Hello "<< fullname;

    return 0;
}
string concatstrings(string string1 , string string2){

    return string1 + " " + string2;
}


