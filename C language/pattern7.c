#include <stdio.h>
int main()
{
    int a=1;
    for (int i = 1; i < 10; i+=2)
    {
        for (int j = 1; j <= 5-a; j++)
        {
            printf(" ");
        }

        a++;

        for (int k = 1; k <=i; k++)
        {
            printf("%d",10-i);
        }
        
        for (int l = 1; l < 10; l+=2)
        {
            printf(" ");
        }

        printf("\n");
        
        
    }
    
 return 0;
}


