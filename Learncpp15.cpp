//Lecture 15 : Project on Temperature conversion (from C and F):
//             Project on Mass conversion (from Pounds to kg):

# include <iostream>

int main(){

// Prject on Temperature conversion (from C and F):

using std::cout;
using std::cin;
using std::string;

string unit;
double temp;

cout << "**********************Temperature convertor (from Celcius and Ferenheit)**************************\n";
cout << "For Ferenheit use : F or f or Fahrenheit or fahrenheit \n";
cout << "For Celcius use : C or c or Celcius or celcius \n";
cout << "Enter the temprature scale : ";
cin >> unit;cout << '\n';

if(unit == "F" || unit == "f" || unit == "Fahrenheit" || unit == "fahrenheit"){

    cout << "Enter temperature on Fahrenheit scale : ";
    cin >> temp;cout << '\n';
    
    double cel = (temp - 32)/1.8;

    cout << "Temperature on Degree Celcius scale is : "<< cel << " C .\n";
    }
else if(unit == "C" || unit == "c" || unit == "Celcius" || unit == "celcius"){

    cout << "Enter temperature on Degree Celcius scale : ";
    cin >> temp;cout << '\n';

    double feh = 1.8*temp + 32;

    cout << "Temperature on Fahrenheit scale is : "<< feh << " F .\n";
    }
else{
    cout << "Invalid input !!! \n";
}
cout << "************************************************************************************************\n" << '\n';

// Project on Mass conversion (from Pounds and kg):

string mu;//mass unit
double mass;

    cout << "**********************Mass Unit Convertor (from Celcius and Ferenheit)**********************\n";
    cout << "For Pounds use : lbs or Lbs or pounds or Pounds \n";
    cout << "For Kilogram use : kg or Kg or kilogram or Kilogram \n";
    cout << "Enter the Mass Unit : ";
    cin >> mu;cout << '\n';

if(mu == "Kg" || mu == "kg" || mu == "Kilogram" || mu == "kilogram"){

    cout << "Enter Mass in Kilograms : ";
    cin >> mass;cout << '\n';
    
    double p = mass*2.20462;//kg to pounds formula

    cout << "Mass in Pounds is : "<< p << " lbs .\n";
    }
else if(mu == "lbs" || mu == "Lbs" || mu == "Pounds" || mu == "pounds"){

    cout << "Enter Mass in Pounds : ";
    cin >> mass;cout << '\n';

    double k = mass/2.20462;//Pounds to kg formula

    cout << "Mass in Kilograms is : "<< k << " kg .\n";
    }
else{
    cout << "Invalid input !!! \n";
}
cout << "*********************************************************************************************\n";

    //Lecture 15 ends
    return 0;
}
