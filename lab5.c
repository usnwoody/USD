#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	float x1, x2, inter;
		
	printf("Enter the coefficients:\n");

	scanf_s("%d%d%d", &a, &b, &c);

	inter = sqrt (b * b - 4 * a * c);

	x1 = (-b + inter) / (2.0 * a);

	x2 = (-b - inter) / (2.0 * a);

	printf("\nThe two roots of the function, ax^2 + bx + c =0, are:\n\nx1= %f\nx2= %f\n", x1, x2);

	getchar();
	getchar();
	return 0;
}