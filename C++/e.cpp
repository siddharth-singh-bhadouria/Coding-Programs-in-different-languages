#include <iostream>
using namespace std;

void swapRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << x << endl
         << y << endl;
    swapRef(x, y);
    cout << x << endl
         << y << endl;
    return 0;
}