#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	//input arrays
	int a[n], b[m];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &b[i]);
	}

	//swap array
	int temp, mini;

	if (m > n)
		mini = n;
	else
		mini = m;


	for (int i = 0; i < mini; ++i)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

	//print array
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < m; ++i)
	{
		printf("%d ", b[i]);
	}


	return 0;
}