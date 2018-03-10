#include <stdio.h>

int main()
{
	int max = 0;
	int num = 0;

	printf("Enter 5 numbers\n");
	
	for (int count = 0; count < 5; count++)
	{
		scanf_s("%d", &num);
		if (max < num)
		{
			max = num;
		}
	}
	printf("\nThe max value entered was %d", max);


	getchar();
	getchar();
	return 0;
}