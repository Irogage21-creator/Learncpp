//A new function called 'new line function'

#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout << "What is your full name ? " << '\n';//let this be 1
    std::getline(std::cin, name);//format of getline function std::getline(std::cin, variable)

    std::cout << "What is your age ?" << '\n';//let this be 2
    std::cin >> age;

    std::cout << "Hello "<< name << '\n';
    std::cout << "You are "<< age << " year's old." << '\n';


    //if we exchange 2 and 1;

    /*std::cout << "What is your age ?" << '\n';
    std::cin >> age;

    std::cout << "What is your full name ? " << '\n';
    std::getline(std::cin, name);

    std::cout << "Hello "<< name << '\n';
    std::cout << "You are "<< age << " year's old." << '\n';*/

    //this will print :
    //What is your age ?
    //19
    //What is your full name ? /*Notice how the input of name has been skipped , 
    //Hello                      because in your input buffer there is a newline character '\n'
    //You are 19 year's old.

    std::cout << "What is your age ?" << '\n';//let this be 2
    std::cin >> age;

    std::cout << "What is your full name ? " << '\n';//let this be 1
    std::getline(std::cin >> std::ws, name);/*Notice how we have extracted std::ws ,
    this operator eliminates any newline character buffer or widespaces */
    //Remember that we >> std::ws 
    
    std::cout << "Hello "<< name << '\n';
    std::cout << "You are "<< age << " year's old." << '\n';

    //Now let us do an assignment , 

    //Assignment 1 : A form that Insert your details in a standard job application form :

    std::string email;
    std::string DOB;
    std::string Phone;
    std::string city;
    std::string country;
    std::string sex;
    std::string ethnicity;
    std::string linkedin_id;
    std::string github_id;
    std::string school;
    std::string university;
    std::string bachlors;
    std::string masters;
    std::string academic_sessions;
    std::string most_recent_company;
    std::string disability;
    std::string job;
    std::string skills;
    std::string company_name;

    std::cout << "Please fill the following details in the form below:"<< '\n';

    std::cout << "For what post your applying for ?:"<< '\n';
    std::getline(std::cin , job);

    std::cout << "What is your full name ?:"<< '\n';
    std::getline(std::cin , name);

    std::cout << "Company you have applied for ?:"<< '\n';
    std::getline(std::cin , company_name);

    std::cout << "What is your email ?:"<< '\n';
    std::getline(std::cin , email);

    std::cout << "What is your phone number ?:"<< '\n';
    std::getline(std::cin , Phone);

    std::cout << "What is your date of birth ?:"<< '\n';
    std::getline(std::cin , DOB);

    std::cout << "What is your city ?:"<< '\n';
    std::getline(std::cin >> std::ws , city);

    std::cout << "What is your country ?:"<< '\n';
    std::getline(std::cin >> std::ws , country);

    std::cout << "What is your sex ?:"<< '\n';
    std::getline(std::cin >> std::ws , sex);

    std::cout << "What is your ethnicity ?:"<< '\n';
    std::getline(std::cin  ,ethnicity);

    std::cout << "What is your linkedin id ?:"<< '\n';
    std::getline(std::cin , linkedin_id);

    std::cout << "What is your github id ?:"<< '\n';
    std::getline(std::cin , github_id);

    std::cout << "What is your school name ?:"<< '\n';
    std::getline(std::cin, school);

    std::cout << "What is your university name ?:"<< '\n';
    std::getline(std::cin, university);

    std::cout << "What is your bachlors degree name ?:"<< '\n';
    std::getline(std::cin , bachlors);

    std::cout << "What is your masters degree name ?, if any:"<< '\n';
    std::getline(std::cin , masters);

    std::cout << "What is your academic sessions duration ?:"<< '\n';
    std::getline(std::cin , academic_sessions);

    std::cout << "What is your most recent company name ?:"<< '\n';
    std::getline(std::cin , most_recent_company);

    std::cout << "Do you have any disability ?:"<< '\n';
    std::getline(std::cin , disability);

    std::cout << "What are your skills ?:"<< '\n';
    std::getline(std::cin , skills);


    std::cout <<'\n'<< std::endl;


    std::cout << "Email : "<< email << '\n';
    std::cout << "Date of birth : "<< DOB << '\n';
    std::cout << "Phone number : "<< Phone << '\n';
    std::cout << "City : "<< city << '\n';
    std::cout << "Country : "<< country << '\n';
    std::cout << "Sex : "<< sex << '\n';
    std::cout << "What is your ethnicity ? :" << ethnicity << '\n';
    std::cout << "Linkedin id : "<< linkedin_id << '\n';
    std::cout << "Github id : "<< github_id << '\n';
    std::cout << "School name : "<< school << '\n';
    std::cout << "University name : "<< university << '\n';
    std::cout << "Bachlors degree name : "<< bachlors << '\n';
    std::cout << "Masters degree name : "<< masters << '\n';
    std::cout << "Academic sessions duration : "<< academic_sessions << '\n';
    std::cout << "Most recent company name : "<< most_recent_company << '\n';
    std::cout << "Do you have any disability ? : "<< disability << '\n';
    std::cout << "Skills : "<< skills << '\n';
    std::cout << "Job post applied for : "<< job << '\n'<<'\n';


    std::cout << "Thank you for applying in " << company_name << ", we will get back to you soon."<< '\n'<<'\n';




    std::cout << "Here Lecture 7 ends";

    //Lecture 7 ends here !

    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------













    
