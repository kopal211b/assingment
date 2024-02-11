#include <stdio.h>
int fib(int n)
{
       if(n== 0 || n == 1)
    {
        return n;
    }

    else
    {
        // recursive call
        return fib(n-1) + fib(n-2);
    }
}
int main (){
    int num;
    printf("Enter End term: ");
    scanf("%d", &num);
    for (int n = 0; n < num; n++)
    {
        printf("%d ", fib(n));
    }
    return 0;
}
