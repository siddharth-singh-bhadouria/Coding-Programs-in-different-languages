#include<stdio.h>

int main()
{
	int n;
    printf("Enter the size of array\n");
	scanf("%d", &n);

	int arr[n];
    
    printf("Enter the numbers\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Even Numbers : \n");//even numbers
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}

	printf("\n\nOdd Numbers : \n");//odd numbers
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}

	printf("\n\nPrime Numbers : \n");
	for (int i = 0; i < n; i++)
	{
        int c=0;//counter
		for (int j = 1; j <=arr[i]; j++)
        {
            if(arr[i]%j==0)
            c++;
        }
        if(c==2)
        printf("%d ",arr[i]);
	}


	return 0;
}