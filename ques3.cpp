#include <iostream>
using namespace std;

class temp
{
    int a, b, sum;

public:
    void input()
    {
        cout << "Enter the value of x and y:\n";
        cin >> a >> b;
    }
    friend class sum;
    void display()
    {
        cout << "The sum is :" << sum << endl;
    }
};

class sum
{
public:
    void add(temp &t)
    {
        t.sum = t.a + t.b;
    }
};
int main()
{
    temp t1;
    sum s1;
    t1.input();
    s1.add(t1);
    t1.display();
    return 0;
}