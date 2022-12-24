#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,mod;
    float div;
    printf("Input 2 numbers");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    mod=a%b;
    div=(float)a/b;
    printf("Addition= %d\nSubtraction= %d\nMultiplication= %d\nModulus= %d\nDivision=%f\n",add,sub,mul,
    mod,div);
    return 0;
}