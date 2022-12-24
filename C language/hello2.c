#include <stdio.h>
#include <stdlib.h>

int n;
void pushpa(int arr[n])
{
    int m,c=0;
    m=arr[0];

    qsort((void*)arr, n , sizeof(arr[0]), pushpa);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          if( arr[i] == arr[j] && i!=j)
          c++;
        }

        if( m < arr[i]+c)
        m = arr[i]+c;
        c=0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int main(void)
{
	int t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        
        pushpa(arr);

    }
	return 0;
}

