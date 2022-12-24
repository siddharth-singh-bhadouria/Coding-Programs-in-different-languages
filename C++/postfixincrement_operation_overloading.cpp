// postfix increment operator overloading

#include <iostream>
using namespace std;

class Integer
{
private:
    int i;

public:
    // Parameterised constructor
    Integer(int i = 0)
    {
        this->i = i;
    }

    // Overloading the postfix operator
    Integer operator++(int)
    {
        // returned value should be a copy of the object before increment
        Integer temp = *this;
        ++i;
        return temp;
    }

    void display()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    Integer i1(3);

    cout << "Before increment: ";
    i1.display();

    Integer i2 = i1++;

    cout << "After post increment: " << endl;
    cout << "i1: ";
    i1.display();
    cout << "i2: ";
    i2.display();
}
