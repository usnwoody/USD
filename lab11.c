#include <stdio.h>

int main()
{
	int num = 0;

	for (int i = 9; i >= 1; i--)
	{
		for (int j = 1; j <= (9 - i); j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	
	
	getchar();
	getchar();
	return 0;
}