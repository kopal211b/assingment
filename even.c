#include <stdio.h>

void printEven(int n, int count) {
    // Base case: If count reaches n, stop recursion
    if (count == n) {
        return;
    }

    // Recursive step: Print the current even number and call the function recursively
    printf("%d ", 2 * count);
    printEven(n, count + 1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d even numbers are: ", n);
    printEven(n, 0); // Start with count = 0

    return 0;
}
