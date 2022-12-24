#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        char arr[n],a=0;

        for (int i = 0; i < n; i++)
        {
            scanf(" %c",&arr[i]);
            if(arr[i]=='c' || arr[i]=='g' || arr[i]=='l' || arr[i]=='r' || arr[i]=='x')
            a++;
        }
        
        printf("%d\n",(2^a));

    }
    return 0;
    
}

