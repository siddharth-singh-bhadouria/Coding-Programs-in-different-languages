#include<stdio.h>

int main()
{
	int n;
    printf("Enter order of square matrix:\n");
	scanf("%d", &n);

	int a[n][n];

    printf("Enter elements of matrix:\n");

	for (int i = 0; i < n;i++)
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}

	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				sum += a[i][j];
		}

	printf("Left Diagonal sum : %d\n", sum);

    int s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i+j==(n-1))
				s += a[i][j];
		}

	printf("Right Diagonal sum : %d\n", s);

	return 0;
}