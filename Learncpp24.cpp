// Practice Project on Nested loops :
// Creating a Rectangle & Triangle made up of different special characters

# include <iostream>

int main (){

    using std::cin;
    using std::cout;

    int row;
    int column;
    char symbol;

    cout << "How many rows do you want in your Rectangle : ";
    cin >> row;

    cout << "How many column do you want in your Rectangle : ";
    cin >> column;

    cout << "Enter your symbol : ";
    cin >> symbol;

    for( int i = 1 ; i <= row; i++){
        for( int j = 1 ; j <= column; j++){
            cout << symbol << " " ;
        }
        cout << '\n';
    }

    return 0;
}