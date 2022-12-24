#include<stdio.h>

int main()
{
	int n;
    printf("Enter order of square matrix:\n");
	scanf("%d", &n);

	int a[n][n];

    printf("Enter elements of matrix:\n");

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}

	int flag = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i != j)
				if (a[i][j] != a[j][i])
					flag = 1;
		}

	if (flag)
		printf("Not a Symmetric Matrix\n");
        else 
        printf("Symmetric Matrix\n");

	return 0;
}