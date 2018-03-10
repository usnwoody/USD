#include <stdio.h>

int AverageTwo(int num1, int num2)
{
	int avg;

	avg = (num1 * num2) / 2;

	printf("%d", avg);
}

int main()
{
	int a,b;

	printf("Enter the first number\n");
	scanf_s("%d", &a);
	printf("Enter the second number\n");
	scanf_s("%d", &b);
	
	AverageTwo(a,b);

	getchar();
	getchar();
	return 0;
}