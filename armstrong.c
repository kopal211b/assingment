#include <stdio.h>
#include <math.h>

void armstrong(int num) {
    int temp1 = num, temp = num, sum = 0, c = 0;
    while (num != 0) {
        num /= 10;
        c++;
    }
    while (temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, c);
        temp /= 10;
    }
    if (sum == temp1)
        printf("Armstrong Number!\n");
    else
        printf("Not an Armstrong number!\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    armstrong(num);

    return 0;
}
