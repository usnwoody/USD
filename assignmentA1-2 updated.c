#include <stdio.h>
#include <stdlib.h>

void reverse(int array[], int n);
int fillArray(int a[], int size);
void printArray(int a[], int size);

int main(){

    int n = 0;
    //user input for "n"
    printf("Enter the number of integers between 3 and 10:\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter the integers:\n");
    
    for (int j = 0; j < n; j++){
        fillArray(A, n);
    }
    
    reverse(A, n);
    printArray(A, n);
    
    getchar();
    return 0;
}

void reverse(int array[], int n){
    int temp;
    int end = (n - 1);
    for(int c = 0; c < end; c++){
        temp = array[c];
        array[c] = array[end];
        array[end] = temp;
        end--;
        }
}

int fillArray(int a[], int size){
    int num, p;	
            scanf("%d", &n);
            if (num % 3 == 0){
                a[p] = num;
                printf("\n");
                p++;
            }
        }



void printArray(int a[], int size){
    	for (int q = 0; q < size; q++)
            printf("%d\n", a[q]);
}