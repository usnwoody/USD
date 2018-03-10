#include <stdio.h>

void split(int a[], int b[], int c[], int size, int *pos, int *neg);
void fillArray(int a[], int size);
void printArray(int a[], int size);

int main()
{
    //initialize variables and arrays
    	int myArray[20];
	int positive[20];
	int negative[20];
        int n;
        int counterPos = 0;
        int counterNeg = 0;

        //user input for "n"
        printf("Enter the number of integers from 3 up to 20:\n");
        scanf("%d", &n);
        
        //check range
        if ((2 < n)&&(n < 21)){
                //user input for array integers
                printf("enter the numbers for the array:\n");
                fillArray(myArray, n);
        
                //pos and neg splitter
                split(myArray, positive, negative, n, &counterPos, &counterNeg); 

        
                //print functions
                printf("Positive Array:\n");
                printArray(positive, counterPos);
                printf("Negative Array:\n");
                printArray(negative, counterNeg);
            }
        
        //number is not in range
        else
            printf("Number not in range (3 - 20). Better luck next time!");
              


	getchar();
	getchar();
	return 0;
}

//functions

void split(int a[], int b[], int c[], int size, int *pos, int *neg){
	int i = 0; 
        int h = 0;
        int u = 0;
	for (int i = 0; i < size; i++){
                if(a[i] >= 0){
                    	b[h] = a[i];
                        h++;
                        *pos = *pos + 1;
                }
		if(a[i] < 0){ 
			c[u] = a[i];
                        u++;
                        *neg  = *neg + 1;
                }
        }
}

void fillArray(int a[], int size){
    	for (int j = 0; j < size; j++){
		scanf("%d", &a[j]);
        }
}

void printArray(int a[], int size){
    	for (int q = 0; q < size; q++)
            printf("%d\n", a[q]);
}