#include <iostream>
using namespace std;

class faculty
{
public:
    string name, qualification, department;
    int age;

    void input()
    {
        cout << "Enter details of faculty:" << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter qualification: ";
        cin >> qualification;
        cout << "Enter department: ";
        cin >> department;
    }
    void display()
    {
        cout << endl
             << "Information on Faculty:" << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Qualification:" << qualification << endl;
        cout << "Department:" << department << endl;
    }
};

int main()
{
    int x = 1;
    while (x)
    {
        faculty s1;
        s1.input();
        s1.display();
        cout << endl
             << "Enter 0 to stop & 1 to continue:";
        cin >> x;
        if (x == 0)
        {
            cout << "Ended\n";
            break;
        }
    }
    return 0;
}