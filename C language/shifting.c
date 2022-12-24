#include<stdio.h>
//Left and right shifting//
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Left Shift=%d\n",a<<1);
    printf("Right Shift=%d\n",a>>1);
    return 0;
}