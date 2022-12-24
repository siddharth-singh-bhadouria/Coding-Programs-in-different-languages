#include <stdio.h>
int fib(int n)
{
    if(n==1||n==2)
    return n-1;
    else 
    return (fib(n-1)+fib(n-2));
}

int main()
{
    int n;
    printf("Enter the index for fibonacii series starting from 0,i.e. for 011235.... index 1 is 0 index 2 is 1 index 4 is 2 and so on\n");
    scanf("%d",&n);
    printf("The number at index %d is %d\n",n,fib(n));
    return 0;
}
