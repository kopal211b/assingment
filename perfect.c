#include <stdio.h>
int perfect(int num)
{
    int sum = 0, rem;
    for (int i = 1; i < num; i++)
    {
        if ((num % i) == 0)
        {
            sum = sum + i;
        }
    }
    (sum == num) ? printf("Perfect Number!") : printf("Not a Perfect number!");
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    perfect(num);
    return 0;
}
