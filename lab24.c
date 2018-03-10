
#include <stdio.h>
int fib(int n);

int main() {

   
    int g;
    printf("Enter the number:");
    scanf("%d", &g);
    int i;
    for (i = 0; i < g; i++)
    {
        int a = fib(g);
    
        if(i == g - 1)
        printf("%d\t\n", a);
    
    }
    
    getchar();

}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
