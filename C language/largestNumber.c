#include<stdio.h>

int main()
{
	int m, n;
    printf("Enter number of rows and columns of matrix:\n");
	scanf("%d %d", &m, &n);

	int a[m][n];
    printf("Enter elements of the matrix:\n");
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &a[i][j]);
		}

	int largest = 0;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (largest < a[i][j])
				largest = a[i][j];
		}


	printf("Largest number of matrix: %d\n", largest);
	return 0;
}