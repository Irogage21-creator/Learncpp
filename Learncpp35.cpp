//Project : Creating a banking program :

#include<iostream>
#include<iomanip>

void showbalace(double balance);
double deposit();
double withdraw(double balance);
using namespace std;

int main(){
    
    double balance = 100000;
    int choice;

    do{
    cout << "\n****************************\n";
    cout << "Enter your choice\n";
    cout << "****************************\n";

    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw your money\n";
    cout << "4. Exit\n";
    cin >> choice;

    switch(choice){

        case 1 : showbalace(balance);
                    break;
        case 2 : balance += deposit();
                 showbalace(balance);
                    break;
        case 3 : balance -= withdraw(balance);
                 showbalace(balance);
                    break;
        case 4 : cout << "Thanks for visiting!!!";
                    break;
        default : cout << "Invalid Choice\n";
    }
    }while(choice != 4);

    return 0;
}
void showbalace(double balance){
  cout << "\nYour current account balance is : "<< setprecision(3) << fixed << balance << endl;
}
double deposit(){
    double amount = 0;
    cout << "Enter the amount you want to deposit : ";
    cin >> amount;
    if(amount > 0){return amount;}
    else{cout << "Thats not a valid deposit!! : " ;
    return 0;}
}
double withdraw(double balance){
    double amount = 0;
    cout << "Enter the amount you want to deposit : " ;
    cin >> amount;
    if(amount > balance){
        cout << "You do not have sufficient funds";
        return 0;
    }
    else{return amount;}
    
}