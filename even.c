#include <stdio.h>

void Even(int n, int count) {
        if (count == n) {
        return 0;
    }
    printf("%d ", 2 * count);
    Even(n, count + 1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d even numbers are: ", n);
    Even(n, 0); 
    return 0;
}
