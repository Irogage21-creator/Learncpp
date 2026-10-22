// Practice Project on Nested loops :
// Creating a Rectangle & Triangle made up of different special characters

# include <iostream>

int main (){

    using std::cin;
    using std::cout;

    //Rectangle :

    int row;
    int column;
    char symbol;

    cout << "************Printing a Rectangle************\n";

    cout << "How many rows do you want in your Rectangle : ";
    cin >> row;

    cout << "How many column do you want in your Rectangle : ";
    cin >> column;

    cout << "Enter your symbol : ";
    cin >> symbol;

    for( int i = 1 ; i <= row; i++){ //For Rows 
        for( int j = 1 ; j <= column; j++){
            cout << symbol << " " ;//For Colums
        }
        cout << '\n';
    }

    //Triangles :

    // A Right angled triangle (Left Aligned):
    int n;
    char s;

    cout << "************Printing a Right angled triangle (Left Aligned)************\n";
    cout << "Enter the Height of Triangle : ";cin >> n;
    cout << "Enter your symbol : ";cin >> s;

    for( int i = 1; i <= n; i++){ //This code specifies Height of the triangle (Let us name this as CODE 1)

        for(int j = 1; j <= i; j++){ //This code specifies that the Projection would be a triangle (Let us name this as CODE 2)
            //it works as y <= -x 
            //Filling the entire space below the line
            /*Trick : Assume    1) CODE 1 as x axis 
                                2) CODE 2 as y axis*/
                                
            cout << s << ' ';
        }
        cout << '\n';
    }

    // An Inverted Right angled triangle (Left Aligned):
    int o;
    char u;

    cout << "************Printing a Right angled triangle (Left Aligned)************\n";
    cout << "Enter the Height of Triangle : ";cin >> o;
    cout << "Enter your symbol : ";cin >> u;

    for( int i = o; i >= 1; i--){ //This code specifies Height of the triangle (Let us name this as CODE 3)

        for(int j = 1; j <= i; j++){ //This code specifies that the Projection would be a triangle (Let us name this as CODE 4)
            //it works as y >= -x 
            //Filling the entire space below the line
            /*Trick : Assume    1) CODE 3 as x axis 
                                2) CODE 4 as y axis*/
                                
            cout << u << ' ';
        }
        cout << '\n';
    }

    // A Right angled triangle (Right Aligned):

    int m;
    char p;
    cout << "************Printing a Right angled triangle (Right Aligned)************\n";
    cout << "Enter the Height of Triangle : ";cin >> m;
    cout << "Enter your symbol : ";cin >> p;

    for( int i = 1; i <= m; i++){//This code specifies Height of the triangle (Let us name this as CODE 5)
        
        for(int space = 1; space <= m - i; space++){//This CODE will shift the triangle to RHS by printing blank spaces (Let us name this as CODE 6)

            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << p << ' '; 
            //it works as y <= x 
            //Filling the entire space below the line
            /*Trick : Assume    1) CODE 5 as x axis 
                                2) CODE 6 as y axis*/
        }
        cout << '\n';
    }

    // An Inverted Right angled triangle (Right Aligned):

    int k;
    char f;
    cout << "************Printing a Right angled triangle (Right Aligned)************\n";
    cout << "Enter the Height of Triangle : ";cin >> k;
    cout << "Enter your symbol : ";cin >> f;

    for( int i = k; i >= 1; i--){ //This code specifies Height of the triangle (Let us name this as CODE 7)
        
        for(int space = 1; space <= k - i; space++){//This CODE will shift the triangle to RHS by printing blank spaces (Let us name this as CODE 8)

            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << f << ' '; 
            //it works as y <= x 
            //Filling the entire space below the line
            /*Trick : Assume    1) CODE 7 as x axis 
                                2) CODE 8 as y axis*/
        }
        cout << '\n';
    }

    // An Equilateral Triangle :

    int q;
    char r;
    cout << "************Printing an Equilateral angled triangle************\n";
    cout << "Enter the Height of Triangle : ";cin >> q;
    cout << "Enter your symbol : ";cin >> r;

    for( int i = 1; i <= q; i++){//This code specifies Height of the triangle (Let us name this as CODE 9)
        
        for(int space = 1; space <= q-i; space++){//This CODE will shift the triangle to RHS by printing blank spaces 

            cout << "  ";
        }
        for(int j = 1; j <= (2*i - 1) ; j++){/*We have used odd numbers as they have symmetry
                                                          *             1
                                                        * * *           3
                                                      * * * * *         5
                                                    * * * * * * *       7
                                                  * * * * * * * * *     9               
                                                * * * * * * * * * * *   11        */ 
            cout << r << ' ';
            //it works as y <= x or y <= -x 
            //Filling the entire space below the line
            /*Trick : Assume    1) CODE 9 as x axis 
                                2) CODE 10 as y axis*/
        }
        cout << '\n';
    }

    // An Inverted Equilateral Triangle :

    int t;
    char a;
    cout << "************Inverted Printing an Equilateral angled triangle************\n";
    cout << "Enter the Height of Triangle : ";cin >> t;
    cout << "Enter your symbol : ";cin >> a;

    for(int i = t; i >= 1; i--){

        for(int space = 1 ; space <= t - i; space++){
            cout << "  ";
        }
        for(int j = 1; j <= 2*i - 1; j++){
            /*We have used odd numbers as they have symmetry
                                                    * * * * * * * * * * *   11    
                                                      * * * * * * * * *     9 
                                                        * * * * * * *       7   
                                                          * * * * *         5
                                                            * * *           3
                                                              *             1  
                                                        */ 
            //it works as y >= x or y >= -x 
            //Filling the entire space below the line
            /*Trick : Assume    1) CODE 1 as x axis 
                                2) CODE 2 as y axis*/
            cout << a << ' ';
        }
        
        
        cout << '\n';
    }

    return 0;
}