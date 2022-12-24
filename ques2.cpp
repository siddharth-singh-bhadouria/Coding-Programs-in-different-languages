#include <iostream>
using namespace std;

int main()
{
    int a = -55;
    cout << "\nBefore try block\n";
    try
    {
        cout << "Inside try block\n";
        if (a < 0)
        {
            throw a;
        }
    }

    catch (int a)
    {
        cout << "Exception caught\n\n";
    }

    catch (...)
    {
        cout << "Default catch block\n";
    }
    return 0;
}