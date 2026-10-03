#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is Greater";
        }
        else
        {
            cout << c << " is Greater";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is Greater";
        }
        else
        {
            cout << c << " is Greater";
        }
    }
}
