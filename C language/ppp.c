#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
       printf("Enter value:");
       scanf(" %c",&arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
       printf("%c\n",arr[j]);
    }
    return 0;
}