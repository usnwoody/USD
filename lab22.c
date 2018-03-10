#include <stdio.h>
void buildFill(int a[4][4], int row, int col, int fill);
void display(int a[4][4], int row, int col, int fill);
void diagonal(int a[4][4], int row);


int main() {

    int row = 4;
    int col = 4;
    int c = 1;
    int array[4][4];
    
    //build & fill array
    
    buildFill(array, row, col, c);
   
    //display array
    
    display(array, row, col, c);
             
    printf("\n\nDiagonals:\n");
    
    //return diagonals
    
    diagonal(array, row);
    
                
    printf("\n");
    return 0;
}

//functions
void buildFill(int a[4][4], int row, int col, int fill){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            a[i][j] = fill++;
        }
    }
}

void display(int a[4][4], int row, int col, int fill){
    for(int k = 0; k < row; k++){
        for(int l = 0; l < col; l++){
            printf("%d\t", a[k][l]);
        }
        printf("\n");
    }    
}

void diagonal(int a[4][4], int row){
        for (int b = 0; b < row; b++){
            printf("%d\t", a[b][b]);
        }
}

