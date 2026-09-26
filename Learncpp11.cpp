//Lecture 11 :Switch statement:

//Switch statement is used to perform different actions based on different conditions.

#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int month;

    cout << "Enter the month number (1-12): ";
    cin >> month;

    //Structure of a switch statement:
    /*switch(expression){
        case value1:
            // code to be executed
            break;
        case value2:
            // code to be executed
            break;
        default:
            // code to be executed if none of the above
    }*/

    //In this example, 
    //we will use a switch statement to print the name of the month
    //based on the month number entered by the user.

    switch(month){                        

        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;  
        case 3:
            cout << "March" << endl;
            break;  
        case 4:
            cout << "It is April" << endl;
            break;
        case 5:
            cout << "It is May" << endl;
            break;
        case 6:
            cout << "It is June" << endl;
            break;
        case 7:
            cout << "It is July" << endl;
            break;
        case 8:
            cout << "It is August" << endl;
            break;
        case 9:
            cout << "It is September" << endl;
            break;
        case 10:
            cout << "It is October" << endl;
            break;
        case 11:
            cout << "It is November" << endl;
            break;
        case 12:
            cout << "It is December" << endl;
            break;

        default:
            cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
    }

    //In this example, 
    //we will use a switch statement to print a message 
    //based on the grade entered by the user.

    char grade;
    cout << "Enter Your Grade : ";
    cin >> grade;   

    switch(grade){
        case 'A':
            cout <<"Great! , you have done an excellent job! " << endl;
            break;
        case 'B':
            cout << "Good! , but you can do better! " << endl;
            break;
        case 'C':
            cout << "You have done a decent job! , but you need to work harder! " << endl;
            break;
        case 'D':
            cout << "You need to work a lot on your studies! , you are not doing well! " << endl;
            break;
        default:
            cout << "You have failed! , you need to work a lot on your studies! " << endl;
            break;
    }

    return 0;


    //Lecture 11 ends
}