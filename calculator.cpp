#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1; //will hold the foirst input
    float num2; //will hold the second input
    float sum;  //will hold the sum
    char op; //will hold the operator 

    cout << "Please enter two unbers seprated by operator sign: ";
    cin >> num1;
    op = getchar();
    cin >> num2;
    
    switch (op)
    {
    case '+' :
        sum = num1 + num2;
        break;

    case '-' :
        sum = num1 - num2;
        break;

    case '*' :
        sum = num1 * num2;
        break;

    case '/' :
        sum = num1 / num2;
        break;

    default:
        cout << "operator error!\n";
        break;
    }
    
    cout << ">> " << num1 << op << num2 << " = ";
    cout << setprecision(3) << fixed << sum << endl;

    return 0;
}