#include <stdio.h>
int main()
{
    int p,r,t,i;
    printf("Enter principal amount,rate and time:\n");
    scanf("%d %d %d",&p,&r,&t);
    i=p*r*t/100;
    printf("Interest=%d",i);
    return 0;
}