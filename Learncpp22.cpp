//Lecture 20 : Break and Continue keywords

#include <iostream>
int main (){

// break = break out of a loop
// continue = skip current iteration

// Example of Break keyword :

for( int i = 1; i<= 20; i++){

    if(i == 13){
        break;
    }

    std::cout << i << '\n';
}
// output of the above code will stop at 12 or say 'break' at 13

std::cout << std::endl;

// Example of Continue keyword :

for( int i = 1; i<= 20; i++){

    if(i == 13){
        continue;
    }

    std::cout << i << '\n';
}
// output of the above code will break at 12 and then will continue from
// 14, skipping 13 entirely

return 0;

// These are break and continue keywords, these will come in handy
}