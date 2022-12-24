#include <stdio.h>
int r;
void starPattern()
{
    printf("Enter the number of rows for pattern:\n");
    scanf("%d",&r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        for (int k =1; k <=(r-i); k++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
}

void reverseStarPattern()
{
    printf("Enter the number of rows for pattern:\n");
    scanf("%d",&r);
    for (int i = r; i >=1; i--)
    {
        for (int j = i; j >=1; j--)
        {
            printf("*");
        }
        
       for (int k =0; k <=(r-i); k++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
}
    
int main()
{
    int n;

    while(1)
    {
        printf("\n\nEnter 1 for star pattern\nEnter 2 for reverse star pattern\nEnter 0 to exit the program\n\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: 
    starPattern();
        break;

    case 2:
    reverseStarPattern();
        break;

    case 0:
    printf("Stopping the program....\n");
    goto end;
    
    default:
    printf("Invalid Input");
        break;
    }
    }
    end:
    return 0;
}