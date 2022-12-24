#include <stdio.h>
#include <string.h>
#include <math.h>
// #include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int l = 2*n-1;
   
    int first = 0, last = l-1;
    int arr[l][l];
    int i,j;
    while(n!=0)
    {
        for(i =first; i<=last; i++)
        {
            for(j =first; j<=last; j++)
            {
                if(i==first ||  i == last ||j == first || j ==last)
                arr[i][j] = n;
                
            }
          

        }
                ++first;
                --last;
                --n;
                
    }
for(int i =0; i<l; i++)
{
    for(int j=0; j<l; j++)
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
}




// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 