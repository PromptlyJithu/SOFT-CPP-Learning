#include <iostream>

using namespace std;

int main() {
    string name;
    int age;
    double mark;


    cout << "name:"; cin >> name;
    cout<<"age:"; cin>>age;
    cout<<"mark:"; cin>>mark;

    cout<<"student details" << endl;
    cout<<"----------------" << endl;

    cout<<"name:" << name << endl;
    cout<<"age:" << age << endl;
    cout<<"mark:" << mark << endl;
    cout<<"percentage:" << mark / 5 << "%" << endl;
    
    
    return 0;
}