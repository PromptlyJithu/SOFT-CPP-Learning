#include <iostream>
using namespace std;

int total(int num, int arr[])
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int highest(int num, int arr[])
{
    int max = 0;
    for (int i = 0; i < num; i++)
    {
        int temp = arr[i];
        if (temp >= max)
        {
            max = temp;
        }
    }
    return max;
}
int lowest(int num, int arr[])
{
    int min = arr[0];
    for (int i = 0; i < num; i++)
    {
        int temp = arr[i];
        if (temp <= min)
        {
            min = temp;
        }
    }
    return min;
}
int failed(int num, int arr[])
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < 50)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int temp;
    int number;
    bool isTrue = true;
    while (isTrue)
    {
        cout << "How Many Students Are There?" << endl;
        cin >> number;

        if (number > 100 || number < 1)
        {
            cout << "Enter Valid Input";
            return 0;
        }
        int store[number];
        cout << "Enter Marks";
        for (int i = 0; i < number; i++)
        {
            cin >> temp;
            store[i] = temp;
        }
        bool notExit = true;
        while (notExit)
        {
            int op;
            cout << "***********************************" << endl
                 << "Enter The Corresponding Operation" << endl
                 << "***********************************" << endl
                 << "1 - Show Average And Total" << endl
                 << "2 - Show Highest And Lowest" << endl
                 << "3 - Show Number Passed and Failed" << endl
                 << "4 - All of the Above" << endl
                 << "5 - Exit" << endl
                 << "***********************************" << endl;
            cin >> op;
            switch (op)
            {
            case 1:
                cout << "The Average Mark is: " << total(number, store) / 4 << endl
                     << "The Total Marks is: " << total(number, store) << endl;
                break;
            case 2:
                cout << "The Highest Mark is: " << highest(number, store) << endl
                     << "The Lowest Mark is: " << lowest(number, store) << endl;
                break;
            case 3:
                cout << "The Ones Passed are: " << number - failed(number, store) << endl
                     << "The Ones Failed are: " << failed(number, store) << endl;
                break;
            case 4:
                cout << "The Average Mark is: " << total(number, store) / 4 << endl
                     << "The Total Marks is: " << total(number, store) << endl
                     << "The Highest Mark is: " << highest(number, store) << endl
                     << "The Lowest Mark is: " << lowest(number, store) << endl
                     << "The Ones Passed are: " << number - failed(number, store) << endl
                     << "The Ones Failed are: " << failed(number, store) << endl;
                break;
            case 5:
                notExit = false;
                cout << "Bye Bye <3" << endl;
            }
        }
        cout << "Do You Want to Run It Again With New Marks? y/n: ";
        char x;
        cin >> x;
        if (x == 'n')
        {
            isTrue = false;
            cout << "See u soon xoxo >.<" << endl;
        }
    }
}