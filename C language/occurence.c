#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];

	int unique[11] = {0};

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 11; ++j)
		{
			if (a[i] == j + 30)
			{
				unique[j]++;
				break;
			}
		}
	}

	for (int i = 0; i < 11; ++i)
	{
		if (unique[i])
			printf("\nOcurrance of %d is %d", (i + 30) , unique[i]);
	}


	return 0;
}