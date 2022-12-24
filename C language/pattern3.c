#include <stdio.h>
int main()
{
    
for (int i=5; i>0; i--)
{
    for (int j=5-i;j>0;j--)
    {
        printf(" ");
    }
    for (int k=(2*i-1);k>0;k--)
    {
        printf("*");
    }
    for (int l=5-i;l>0;l--)
    {
        printf(" ");
    }
    printf("\n");
}      
 return 0;
}

