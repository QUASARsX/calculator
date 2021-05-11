#include <iostream>      //c++ Preprocessor directive for linking the I/O stream Library (To Get Input and Outputing To Console)
//#include <iomanip>    //c++ Preprocessor directive for linking I/O Map (To set precision points)
using namespace std;   //c++ Standard Library for standard spacing (Ignors every blank line e.g after opening sign to the closing sign)

int main()
{
    long double num1;      //holds the first number
    long double num2;     //holds the second number
    long double sum;     //holds the operator
    char op;    

    cout << "Please enter two number seprated by operator sign: ";
    cin >> num1;          //gets the first number
    op = getchar();      //gets the operator input
    cin >> num2;        //gets the second number

    //condiotions for different operator
    switch (op)  
    {

    //if user inputs '+'(plus) sign
    case '+' :  
        sum = num1 + num2;
        //breaks the condition if expresion matches
        break;  

    //if user inputs '-'/(minus) sign
    case '-' :
        sum = num1 - num2;
        break;

    //if user inputs '*'/(multiplication) sign
    case '*' :  
        sum = num1 * num2;
        break;
        
    //if user inputs '/'(division) sign
    case '/' :  
        sum = num1 / num2;
        break;
    }
    
    cout << ">> " << num1 << op << num2 << " = " << sum << '\n';
    //cout << setprecision(2) << fixed << sum << endl; //setting final result (sum) to 2 decimal precision point

    return 0;       //returns 0 (an int) to the OS, That means the proggram runs successfully
}
