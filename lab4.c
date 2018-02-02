#include <stdio.h>

int main(void)
{
	float total, a, b, c;


		printf("Enter the R1: \n");

		scanf_s("%f", &a);
	
		printf("Enter R2: \n");
	
		scanf_s("%f", &b);

		printf("Enter R3: \n");

		scanf_s("%f", &c);
		
		total = 1.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c));


		printf("\nThe total resistance is %f \n\n", total);

		//getchar();

		//getchar();

		//getchar();

		//getchar();
	return 0;
}