#include<stdio.h>

int main()
{
	int n;
    printf("Enter order of matrix:\n");
	scanf("%d", &n);

	int a[n][n], b[n][n], c[n][n];

	printf("Enter elements of matrix A:\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &a[i][j]);
		}

    printf("Enter elements of matrix B:\n");
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &b[i][j]);
		}


	int ch;
	do
	{

		printf("\n\t\tMENU\t\n");
		printf("\n\t1.Add");
		printf("\n\t2.Subtract");
		printf("\n\t3.Multiply");
		printf("\n\t4.Exit\n");


		printf("\n\tEnter your input(1-4) : ");
		scanf("%d", &ch);

		if (ch == 1)
		{
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					c[i][j] = a[i][j] + b[i][j];
			break;
		}
		else if (ch == 2)
		{
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					c[i][j] = a[i][j] - b[i][j];
			break;
		}
		else if (ch == 3)
		{
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					c[i][j] = a[i][j] * b[i][j];
			break;
		}

	} while (ch != 4);


	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}