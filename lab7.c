#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, counter, sum, num;

	sum = 0;
	
	printf("Please enter the number of elements you would like to check for divisibility by 3:\n");
	scanf_s("%d", &num);

	for (counter = 0; counter < num; counter = counter + 1)
	{
		printf("\nEnter the numbers\n");
		scanf_s("%d", &i);

		if (i >= 3 && i <= 100)
		{
			if (i % 3 == 0)
			{
				printf("\nNumber %d is divisable by 3", i);
				sum = sum + i;
			}
			else
			{
				printf("The number %d is not divisable by 3", i);
			}
		}
		else
		{
			printf("The number %d is not acceptable, enter another one", i);
		}
	}
	printf("\nThe sum of the numbers that are divisible by 3 is: %d", sum);

	getchar();
	getchar();
	return 0;
}