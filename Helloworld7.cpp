//Lecture 7 : Assignment

//Percentage calculator (Class 10th Board Exam):

#include <iostream>

int main(){
    using std::cin;
    using std::cout;

    int mathematics;
    int science;
    int social_science;
    int hindi;
    int english;

    cout << "Fill your marks :"<< '\n'<< '\n';

    cout << "Marks out of 100 in Mathematics :"<< '\n';
    cin >> mathematics;

    cout << "Marks out of 100 in Science :"<< '\n';
    cin >> science;

    cout << "Marks out of 100 in Social science :"<< '\n';
    cin >> social_science;

    cout << "Marks out of 100 in Hindi :"<< '\n';
    cin >> hindi;

    cout<< "Marks out of 100 in English :"<< '\n';
    cin >> english;
    cout << '\n';

    int netsum = mathematics + science + social_science + hindi + english;
    
    double percentage = double(netsum)/5;

   cout << "You have scored "<< percentage << "% in 10th Board Exam."<< '\n';
 

//Volume Calculator of a cone:

    double r ;//radius of cone
    double h ;//height of cone

    cout << "Radius of cone :"<<'\n';
    cin >> r;

    cout<<"height of cone :"<< '\n';
    cin >> h;

    double volume_cone = double (r*r*h)/3;

    cout << "Volume of cone is :"<< volume_cone << " m^3."<< '\n';

    return 0;

    //Lecture 7 ends

}