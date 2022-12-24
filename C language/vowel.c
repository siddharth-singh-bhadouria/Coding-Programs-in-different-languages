#include<stdio.h>

int main()
{
	int n;
    printf("Enter size of array\n");
	scanf("%d", &n);

	char name[n];
	scanf("%s", name);

	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
		{
			c++;
		}
	}

	if (c > 3)
	{	for (int i = 0; i < n; ++i)
		{
			if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
				continue;
			else
                printf("%c", name[i]);
		}
    }
	else
		printf("%s\n", name);

	return 0;
}