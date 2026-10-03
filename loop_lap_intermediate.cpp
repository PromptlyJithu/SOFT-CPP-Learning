#include <iostream>
using namespace std;

void sum_to_n()
{
    // Sum To n
    int n;
    int sum = 0;
    cout << "Enter Number to Get Sum of 1 to N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The Sum Is" << sum << endl;
}

void count_digits_in_num()
{
    int num;
    int count = 0;
    cout << "enter num to count: ";
    cin >> num;
    count = num;
    int i = 0;
    while (count != 0)
    {
        count /= 10;
        i++;
    }

    cout << "the count of numbers is: " << i << endl;
}
void reverse_a_num()
{
    int num;
    cout << "Enter num to reverse: ";
    cin >> num;
    int rev_num = 0;
    while (num != 0)
    {
        int lastnum = num % 10;
        rev_num = rev_num * 10 + lastnum;
        num = num / 10;
    }
    cout << "The Reversed Num: " << rev_num << endl;
}
void sum_of_digits_of_num()
{
    int num;
    cout << "Enter num to get sum of digit";
    cin >> num;
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "The sum of the digits:" << sum << endl;
}
void is_it_palindrome()
{
    int num;
    int reversed = 0;
    cout << "enter num to check is it palindrome: ";
    cin >> num;
    int real = num;

    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (real == reversed)
    {
        cout << real << " is a palindrome" << endl;
    }
    else
    {
        cout << real << " is not a palindrome" << endl;
    }
}

int main()
{
    int choice;

    cout << "1. Sum from 1 to N\n";
    cout << "2. Count digits in a number\n";
    cout << "3. Reverse a number\n";
    cout << "4. Sum the digits of a number\n";
    cout << "5. Check if a number is a palindrome\n";
    cout << "6. Run all programs\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        sum_to_n();
    }
    else if (choice == 2)
    {
        count_digits_in_num();
    }
    else if (choice == 3)
    {
        reverse_a_num();
    }
    else if (choice == 4)
    {
        sum_of_digits_of_num();
    }
    else if (choice == 5)
    {
        is_it_palindrome();
    }
    else if (choice == 6)
    {
        sum_to_n();
        count_digits_in_num();
        reverse_a_num();
        sum_of_digits_of_num();
        is_it_palindrome();
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}