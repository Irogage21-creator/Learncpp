//User defined functions : part 2 :
# include <iostream>

void namelist();//You can also write a function after the main fxa 
//the only condition is you should declare them before the main fx and then define them
void happybirthday(std::string name , int age);

int main(){

    namelist();

    std::string name;
    int age;

    std::cout << "*************Happy Birthday Song*************\n";

    std::cout << "Enter your name : ";
    std::getline( std::cin , name);
    std::cout << "Enter your age : ";
    std::cin >> age;
    happybirthday(name , age);

    return 0;
}

void namelist(){//Here we have defined that fx

    std::cout << "Arya\nKiran\nSurya\nIsha\nAmrit\nTejas\nShashi\nAmar\nDevansh\nAmar\n\n\n";
}
void happybirthday(std::string name , int age /*Here we have used parameters*/){//Here we have defined that fx
    //functions aren't aware of what's going on with another fx, but you can make them aware of any local variables or values by passing them as an argument
    //for that you would need a matching set of parameters 
    //here happybirthday() is not aware of name and age parameters
    //therefore we would pass them as an argument 
    std::cout << "Happy Birthday to you!!\n";
    std::cout << "Happy Birthday to you!!\n";
    std::cout << "Happy Birthday dear "<< name << '\n';
    std::cout << "Happy Birthday to youuu!!!!\n";
    std::cout << "Congrats, you are now "<< age << " y/o.";
}