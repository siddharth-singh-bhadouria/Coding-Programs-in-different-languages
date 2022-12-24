#include <stdio.h>
#include <math.h>

int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        char arr[n];
        double a;

        for (int i = 0; i < n; i++)
        {
            scanf(" %c",&arr[i]);
            if(arr[i]=='c' || arr[i]=='g' || arr[i]=='l' || arr[i]=='r' || arr[i]=='x')
            a++;
        }
         
        double d=pow(2.0,a);
        printf("%lf\n",d);
        a=0;
    }
    return 0;
}