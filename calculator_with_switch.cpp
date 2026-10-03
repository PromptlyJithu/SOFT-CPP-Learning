#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operation (+, -, *, /): ";
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        c = a + b;
        cout << "The sum is: " << c;
        break;
    case '-':
        c = a - b;
        cout << "The difference is: " << c;
        break;
    case '*':
        c = a * b;
        cout << "The product is: " << c;
        break;
    case '/':
        c = a / b;
        cout << "The answer is: " << c;
        break;
    default:
        cout << "Invalid operation.";
    }
}