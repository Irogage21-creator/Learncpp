//Lecture 24 : User defined functions (void)

# include <iostream>

void namelist();
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

void namelist(){

    std::cout << "Arya\nKiran\nSurya\nIsha\nAmrit\nTejas\nShashi\nAmar\nDevansh\nAmar\n\n\n";
}
void happybirthday(std::string name , int age){

    std::cout << "Happy Birthday to you!!\n";
    std::cout << "Happy Birthday to you!!\n";
    std::cout << "Happy Birthday dear "<< name << '\n';
    std::cout << "Happy Birthday to youuu!!!!\n";
    std::cout << "Congrats, you are now "<< age << " y/o.";
}



