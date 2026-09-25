//Lecture 14 : Logical operators (&& , || , !) : 

# include <iostream> 

int main(){

// (And Operator) '&&' = checks if two conditions are true :
    
    using std::cout;
    using std::cin;
    
    int temp;
    cout << "Enter the temperature in degree celcius : ";
    cin >> temp ;cout << '\n';

    if(temp > 0 && temp < 40 ){

        cout << "Temperature is Good!! \n";
    }
    else{ cout << "Temperature is Bad!! \n";}

    //we can also write this code with the help of switches:(actually not)

    /*int temp1;
    cout << "Enter the temperature in degree celcius : ";
    cin >> temp1 ;cout << '\n';
    switch(temp1){

        case temp1 > 0 && temp1 < 40 : 
            cout << "Temperature is Good!! \n";
            break;

        default : 
            cout << "Temperature is Bad!! \n";
    }*/
    //This above code will not run because switch operator is a constant operator , it only takes precise input not 
    //variable inputs such as above ;

    //other way :

    temp > 0 && temp < 40 ? cout << "Temperature is Good!! \n" :  cout << "Temperature is Bad!! \n";//clean and simple
    
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// (OR Operator) '||' = checks atleast one of the two condition is true :

    if(temp < 0 || temp > 40 ){

        cout << "Temperature is Bad!! \n";}

    else{cout << "Temperature is Good!! \n";}
    //other way :
    temp < 0 || temp > 40 ? cout << "Temperature is Bad!! \n" :  cout << "Temperature is Good!! \n";//clean and simple

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// (NOT operator) '!' =  reverses the logical state of its operand :
   
    bool money;
    cout << "Are you earning more than 1 million $ per month ? : ";
    cin >> money;cout << '\n';

    money ? cout << "You are a Millonaire!!! \n" : cout << "You are not a Millonaire!!! \n";
    /* when you use bool datatype , always remember , 
    it evaluates false case first {as input(false) = output(0)} ,then it moves and 
    evaluates true case {as input(true) = output(1)} , as in C++ , the compiler moves as 
    0 ----------> 1 */
    //Therefore use 1 = true and 0 = false in terminal .

    //Now let us use NOT operator :

    !money ? cout << "You are not a Millonaire!!! \n" : cout << "You are a Millonaire!!! \n";
  
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Lecture 14 ends here
    
    return 0;
}