#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        char arr[n],c=0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==3 || arr[i]==7 || arr[i]==12 || arr[i]==18 || arr[i]==24)
            c++;
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%d\n",arr[i]);
        }
        

    }
    return 0;
}