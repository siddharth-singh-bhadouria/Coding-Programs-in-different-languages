#include<stdio.h>

int main()
{
	int m, n;
    printf("Enter number of rows and columns:\n");
	scanf("%d %d", &m, &n);

	int a[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}

	printf("Transpose Matrix :\n");

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}


	return 0;
}