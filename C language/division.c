#include <stdio.h>
int main()
{
    int per;
    printf("Enter percentage");
    scanf("%d",&per);
    if (per>=60)
    printf("First division");
    else if (per>=50)
    printf("Second division");
    else if (per>=40)
    printf("Third division");
    else 
    printf("Fail");
    return 0;
}