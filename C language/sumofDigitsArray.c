#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the numbers:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            while(a[i]!=0)
            {
                s += a[i] % 10;
                a[i] = a[i] / 10;
            }
        } // if
    }     // for

    printf("Sum of digits of even numbers : %d\n", s);

    return 0;
}