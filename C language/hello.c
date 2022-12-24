#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d of the array:\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("The value of element %d of the array is: %d\n",j,ptr[j]);
    }
    
    
    //scanf("",&);
    //printf("");
    return 0;
}
