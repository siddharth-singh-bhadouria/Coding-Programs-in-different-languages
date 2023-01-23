#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;

public:
    void set_data()
    {
        cout << "\nEnter name:";
        cin >> name;
        cout << "Enter roll number:";
        cin >> roll_no;
    }
};

class Exams : public Student
{
public:
    int maths, physics;
    void marks()
    {
        cout << "Enter marks in Maths:";
        cin >> maths;
        cout << "Enter marks in Physics:";
        cin >> physics;
    }
};

class Result : public Exams
{
    float percent;

public:
    void display()
    {
        percent = (maths + physics) / 2;
        cout << "Percentage:" << percent << "%" << endl;
    }
};

int main()
{
    int x = 1;
    while (x)
    {
        Result s1;
        s1.set_data();
        s1.marks();
        s1.display();
        cout << endl
             << "Enter 0 to stop & 1 to continue:";
        cin >> x;
        if (x == 0)
            break;
    }

    return 0;
}
