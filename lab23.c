#include <stdio.h>
int factor(int n);
int main() 
{
    int a;
    
    //get number from user
    printf("Please enter an integer:\n");
    scanf("%d", &a);
    
    int num = factor(a);
    printf("Factorial of %d = %d", a, num);   
}

int factor(int n)
{
    if(n == 1)
        return n;
    else
        return n * factor(n-1);
}