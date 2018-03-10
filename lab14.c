#include <stdio.h>

int factorial(int n);

int main()
{
	int n;
	printf("Please enter n\n");
	scanf_s("%d", &n);
	int product = factorial(n);
	printf("%d! is %d", n, product);
	getchar();
	getchar();
	return 0;
}

int factorial(int n)
{
	int product = n;
	//if (n == 0)
	//	return 1;
	for (int i = 1; i <= n; i++)
	{
		product = product * (product - 1);
		return product;
	}
}
