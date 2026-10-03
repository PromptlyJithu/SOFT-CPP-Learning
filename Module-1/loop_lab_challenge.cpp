#include <iostream>
#include <cmath>
using namespace std;
void is_it_prime()
{
    int num;
    cout << "Enter the num to vheck is it prime: ";
    cin >> num;
    bool prime = true;

    for (int i = 2; (i * i) <= num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
        }
    }
    if (prime)
    {
        cout << num << " is Prime";
    }
    else
    {
        cout << num << " is not Prime";
    }
}
void prime_in_range()
{
    int num;
    int prime;
    cout << "Enter the range for prime nums: ";
    cin >> num;
    bool isPrime = true;

    for (prime = 2; prime <= num; prime++)
    {
        for (int i = 2; (i * i) <= prime; i++)
        {
            if (prime % i == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime == true)
        {
            cout << prime << endl;
        }
        isPrime = true;
    }
}

void fibonacci_series()
{
    int range;
    int first = 0;
    int second = 1;
    cout << "How many Numbers of the series: ";
    cin >> range;
    for (int i = 0; i < range; i++)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}
void check_armstrong()
{
    int num;
    cout << "enter a number";
    cin >> num;
    int before = num;
    int digit = 0;
    int value = 0;

    while (num != 0)
    {
        digit++;
        num /= 10;
    }
    num = before;
    int sum = 0;
    while (num != 0)
    {
        value = num % 10;
        sum = sum + pow(value, digit);
        num /= 10;
    }
    if (sum == before)
    {
        cout << before << " is an armstrong num";
    }
    else
    {
        cout << before << " is not a armstrong num";
    }
}
int main()
{
    int choice;

    cout << "1. Check if a number is prime\n";
    cout << "2. Print prime numbers in a range\n";
    cout << "3. Print Fibonacci series\n";
    cout << "4. Check Armstrong number\n";
    cout << "5. Run all programs\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        is_it_prime();
    }
    else if (choice == 2)
    {
        prime_in_range();
    }
    else if (choice == 3)
    {
        fibonacci_series();
    }
    else if (choice == 4)
    {
        check_armstrong();
    }
    else if (choice == 5)
    {
        is_it_prime();
        prime_in_range();
        fibonacci_series();
        check_armstrong();
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}