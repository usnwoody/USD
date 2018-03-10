#include <stdio.h>

int main()
{
	int total, num, av;
	
	for (int i = 0; i < 6; i++)
	{
		int grade = 0;
		total = 0;
		for (int count = 0; count < 4; count++)
		{
			printf("\nInput a grade\n");
			scanf_s("%d", &num);
			total = total + num;
		}
		av = (total / 4);
			printf("\nThe student's grade is %d\n", av);
	}
	getchar();
	return 0;
}