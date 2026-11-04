//Bitwise operators : 

//BITWISE OPERATORS = special operators used in bit level programming
//                    (knowing binary is important for this topic)

// & = AND
// | = OR
// ^ = XOR
// << = LEFT SHIFT
// >> = RIGHT SHIFT

#include<iostream>

int main(){
    using namespace std;

    int x = 6;  //6  = 00000110
    int y = 12; //12 = 00001100
    int z = 0;  //0  = 00000000

    // & operator : It works as AND gate of logic 
    // Working of & operator : 👉 Dono bits 1 honge tabhi result 1 aayega
    //                         👉 Baaki sab cases mein 0
    z = x & y; // z = 00000100 = 4 
    cout << "AND : " << z << endl;
//_________________________________________________________________________________________________
    // | operator : It works as OR gate of logic
    // Working of | operator : 👉 Dono bits me se koi bhi ek 1 ho to result 1
    //                         👉 Sirf dono 0 honge tab result 0
    z = x | y; // z = 00001110 = 14
    cout << "OR : " << z << endl;
//_________________________________________________________________________________________________
    // ^ operator : It works as XOR/NOR (exclusive OR gate) gate of logic
    // Working of ^ operator : XOR (Exclusive OR) Bitwise Operator ^ ka simple rule:
    //                         👉 Same bits = 0
    //                         👉 Different bits = 1
    z = x ^ y; // z = 00001010 = 10
    cout << "XOR : " << z << endl;
//_________________________________________________________________________________________________
    // << Left shift : 👉 Left shift me bits left side move hoti hain.
    //                 👉 Right side ke khaali places me 0 fill hota hai.
    //                 ✅ Left Shift (<) bits ko left move karta hai, right me 0 bharta hai, 
    //                 aur usually value ko 2ⁿ times multiply kar deta hai.
    //                 a << n = a × 2ⁿ
    z = x << 1; // z = 00001100 = 12 = 6 x 2^1
    cout << "Left Shift : " << z << endl;
    z = y << 2; // z = 00110000 = 48 = 12 x 2^2
    cout << "Left Shift : " << z << endl;
//_________________________________________________________________________________________________
    // >> Right shift : 👉 Right shift me bits right side move hoti hain.
    //                  👉 Rightmost bits discard ho jaati hain.
    //                  ✅ Right Shift (>>) bits ko right move karta hai, rightmost bits ko discard karta hai, 
    //                  aur positive numbers ke liye value ko approximately 2ⁿ se divide kar deta hai.
    //                  a >> n = a / 2ⁿ
    z = x >> 1; // z = 00000011 = 3 = 6 / 2^1
    cout << "Right Shift : " << z << endl;
    z = y >> 2; // z = 00000011 = 3 = 12 / 2^2 
    cout << "Right Shift : " << z << endl;

    return 0;
}