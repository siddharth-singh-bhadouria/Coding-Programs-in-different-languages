#include <stdio.h>
int main()
{
    
for (int i=1; i<=5; i++)
{
    for (int j=1;j<=(5-i);j++)
    {
        printf(" ");
    }
    for (int k=1;k<=i;k++)
    {
        printf("%d",k);
    }
    for (int m=i-1;m>0;m--)
    {
        printf("%d",m);
    }
    for (int l=1;l<=(5-i);l++)
    {
        printf(" ");
    }
    printf("\n");
}      
 return 0;
}

