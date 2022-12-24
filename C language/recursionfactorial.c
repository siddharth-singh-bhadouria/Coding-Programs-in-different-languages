#include <stdio.h>
int factorial(num)
{
    if (num==0||num==1)
    return 1;
    else 
    return (num*factorial(num-1));
}

int main()
{
    int num=0;
    
    printf("Enter number");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,factorial(num));

    return 0;
    
}