#include <iostream>
using namespace std;


int main() {
    int a, n;

    cin >> a;
    n = a % 2;

    if (n == 0) 
        cout << "even";
        cout << "odd";

    return 0;
};
