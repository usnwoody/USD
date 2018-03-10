#include <stdio.h>

int main()
{
	int n = 0;
	printf("Enter the number of elements between 2 and 10:\n");
	scanf_s("%d", &n);

	while (n <= 1 || n >= 11)
	{
		printf("You didn't enter a valid number\n");
		scanf_s("%d", &n);
	}

	if (n > 0 && n < 11)
	{
		int A[10];
		int num;
		printf("Enter the numbers\n");

		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &num);
			A[i] = num;
		}

		for (int j = 0; j < n; j++)
		{
			printf("The element [%d] of array is %d\n", j, A[j]);
		}
		printf("\n");

		for (int k = (n - 1); k >= 0; k--)
		{
			printf("The element [%d] of array is %d\n", k, A[k]);
		}
	}
	getchar();
	getchar();
	getchar();
	return 0;
}