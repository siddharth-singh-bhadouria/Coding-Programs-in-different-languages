#include <stdio.h>
int main()
{
    int i=1,n,mul;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=10)
    {
        mul=n*i;
        printf("%d*%d=%d \n",n,i,mul);
        i++;
    }
    return 0;
}