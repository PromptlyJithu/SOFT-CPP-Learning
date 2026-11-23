#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = 0;
        setMarks(m);
    }

    void setMarks(float m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            cout << "Invalid marks for " << name << endl;
        }
    }

    int getRollNo() { return rollNo; }
    string getName() { return name; }
    float getMarks() { return marks; }

    void display()
    {
        cout << rollNo << " - " << name << " - " << marks << endl;
    }
};

void printResult(Student s)
{
    cout << s.getName() << ": " << (s.getMarks() >= 40 ? "Pass" : "Fail") << endl;
}

int main()
{
    Student batch[3] = {
        Student(1, "Aman", 55),
        Student(2, "Riya", -10), // invalid -> stays 0
        Student(3, "Kabir", 32)};

    batch[1].setMarks(42); // re-evaluation

    for (int i = 0; i < 3; i++)
    {
        batch[i].display();
        printResult(batch[i]);
    }

    return 0;
}