#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n-1; j++)
       {
           if(arr[j]>arr[j+1])
           {
               temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
           }
       }
       
    }

    printf("Array in ascending order:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}