#include <stdio.h>
int new(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=temp+*y;
    *y=temp-*y;
    printf("%d and %d",*x,*y);
    return 0;
}
int main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    new(&a,&b);
    //scanf("",&);
    //printf("",);
    return 0;
}