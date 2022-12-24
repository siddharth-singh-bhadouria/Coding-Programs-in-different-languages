#include<stdio.h>

int main()
{
	int n;
    printf("Enter size of name:\n");
	scanf("%d", &n);

	char name[n];
    printf("Enter name\n");
	for (int i = 0; i < n; i++)
    {
        scanf("%c",&name[i]);
    }
    

	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (name[j] > name[j + 1])
			{
				temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
			}
		}
	}

	printf("%s", name);


	return 0;
}