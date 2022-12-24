#include<stdio.h>

int main()
{
	int n;
    printf("Enter the size of array\n");
	scanf("%d", &n);

	char name[n];
	scanf("%s", name);

	printf("Vowels : \n");
	for (int i = 0; i < n; ++i)
	{
		if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
		{
			printf("%c", name[i]);
		}
	}

	printf("\n\nConsonents : \n");
	for (int i = 0; i < n; ++i)
	{
		if (!(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'))
		{
			printf("%c", name[i]);
		}
	}
	return 0;
}