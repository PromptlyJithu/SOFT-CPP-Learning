#include <iostream>
using namespace std;

int main()
{
    cout << "upto 10";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout << "down to 1";
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }
    cout << "even";
    for (int i = 1; i <= 10; i++)
    {
        cout << i * 2 << endl;
    }
    cout << "odd";
    for (int i = 1; i <= 20; i += 2)
    {
        cout << i << endl;
    }
    cout << "input number for multiplication:";
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * n << endl;
    }
}