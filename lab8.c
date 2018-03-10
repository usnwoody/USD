#include <stdio.h>

int main()
{

	int f = 0;

	printf("DEGREES\tDEGREES");
	printf("\nCELSIUS\tFAHRENHEIT");
	printf("\n-------\t-------");

	for (int c = 5; c <= 50; c++)
	{
		f = (9 / 5) * c + 32;
		if (c % 5 == 0)
		{
			printf("\n%d\t%d", c, f);
		}
		
	}
	


	getchar();
	return 0;
}