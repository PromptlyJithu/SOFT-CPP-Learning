#include <iostream>
using namespace std;
/*
int main()
{
    int a, b, n;
    cout << "Enter the number of units consumed: ";
    cin >> a;

    if (a <= 100)
    {
        b = a * 5;
        n=b;
    }
    else if (a <= 200)
    {
        b = a - 100;
        n=(100 * 5) + (b * 7);
    }
    else
    {
        b = a - 200;
        n=1200 + (b * 10);
    }

    cout << "The total electricity bill is: " << n << endl;
}
    */

int main()
{
    int unit;
    int bill = 0;

    cout << "Enter the number of units consumed: ";
    cin >> unit;
    if (unit > 200)
    {
        bill = (unit - 200) * 10;
        unit = 200;
    }
    if (unit > 100)
    {
        bill += (unit - 100) * 7;
        unit = 100;
    }
    if (unit <= 100)
    {
        bill += (unit * 5);
        unit = 0;
    }

    cout << "The total electricity bill is: " << bill << " rupees";
}