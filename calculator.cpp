#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1; //will hold the foirst input
    float num2; //will hold the second input
    float sum;  //will hold the sum
    char op;   //will hold the operator

    cout << "Please enter two number seprated by operator sign: ";
    cin >> num1;
    op = getchar();
    cin >> num2;
    
    switch (op)  //condiotions for different operator
    {
    case '+' :  //if user inputs '+'(plus) sign
        sum = num1 + num2;
        break;

    case '-' :  //if user inouts '-'/(minus) sign
        sum = num1 - num2;
        break;

    case '*' :  //if user inputs '*'/(multiplication) sign
        sum = num1 * num2;
        break;

    case '/' :  //if user inputs '/'(division) sign
        sum = num1 / num2;
        break;  //breaks the condition if expresion matches
    }
    
    cout << ">> " << num1 << op << num2 << " = "; 
    cout << setprecision(3) << fixed << sum << endl; //setting final result (sum) to 3 decimal precision point

    return 0;
}
