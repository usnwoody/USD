#include <stdio.h>
void displayNumbers(int array[4][5], int row, int col);
void fillArray(int array[4][5], int row, int col);
void rowAdder(int array[4][5], int row, int col);


int main()
{

        int row = 4;
        int col = 5;
        int num[row][col];

        fillArray(num, row, col);
	displayNumbers(num, row, col);
        rowAdder(num, row, col);
         
	getchar();
	getchar();
	return 0;
}

void displayNumbers(int array[4][5], int row, int col)
{
	printf("Displaying:\n\n");
        
	for (int p  = 0; p < row; p++)
	{
	
            for (int q = 0; q < col; q++)
                {
                    printf("%d\t", array[p][q]);
                    int sum = sum + array[p][q];
                    
                    if (q == (col-1))
                    {
                        printf(" %d", sum);
                        sum = 0;
                    }
                }
            printf("\n\n");
        }      
}

void rowAdder(int array[4][5], int row, int col)
{
     int rsum;
     printf("\n");
        
        for (int r= 0; r < col; r++)
        {
            for (int s= 0; s < row; s++)
            {
                rsum = rsum + array[s][r];
                
                if (s == (row-1))
                {

                    printf("%d\t", rsum);
                    rsum = 0;
                }
            }
        }
}

void fillArray(int array[4][5], int row, int col)
{
    
    printf("Enter numbers:\n");
	for (int i = 0; i < row; i++)
	{
                for (int j = 0; j < col; j++)
		{
			scanf("%d", &array[i][j]);
      		}
	}
}