#include<stdio.h>
int main()
{
    int a, b;
    printf("Input Dividend and Divisor");
    scanf("%d%d", &a, &b);
    int c,d;
    c=a/b;
    d=a%b;
    printf("Quotient and Remainder are %d and %d",c,d);
    return 0;
}
