// C++ program for dynamic allocation
#include <iostream>
using namespace std;

class geeks
{
    int *ptr;

public:
    geeks()
    {
        ptr = new int;
        *ptr = 10;
    }

    void display()
    {
        cout << *ptr << endl;
    }
};

int main()
{
    geeks obj1;

    obj1.display();

    return 0;
}
