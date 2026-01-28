#include <iostream>
using namespace std;

int main()
 {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin>>num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result = "<< num1 + num2;
            break;
        case '-':
            cout << "Result = "<< num1 - num2;
            break;
        case '*':
            cout << "Result = "<< num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout<< "Result = "<< num1 / num2;
            else
                cout<< "Sorry!! Division by zero is not allowed.";
            break;
        default:
            cout<< "Invalid operator! Please try again!";
    }
    return 0;
}
