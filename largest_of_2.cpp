#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b;
    }
    else if (a < b)
    {
        cout << b << " is greater than " << a;
    }
    else
    {
        cout << a << " and " << b << " are equal";
    }

    return 0;
}