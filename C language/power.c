#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r;
    printf("Base");
    scanf("%d", &n);
    printf("Exponent");
    scanf("%d", &m);
    r= pow(n,m);
    printf("Result=%d",r);
    return 0;
}