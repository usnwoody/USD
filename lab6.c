#include <stdio.h>
#include <math.h>

int main()
{
	int number;

	printf("Please enter a number \n");

	scanf_s("%d", &number);

	if ((number / 2)*2 == number)
		printf("Even\n");
	else
		printf("Odd\n");

	getchar();
	getchar();
	return 0;
}