#include <stdio.h>
#include <string.h>

void lt(char str[]) {
    char s;
    int k;
    printf("Enter index: ");
    scanf("%d", &k);
    printf("Enter key: ");
    scanf(" %c", &s); // Add a space before %c to consume any whitespace characters

    for (int i = strlen(str); i >= k; i--) {
        str[i + 1] = str[i];
    }
    str[k] = s;

    printf("Updated string: %s\n", str);
}

int main() {
    char str[100];
    printf("Enter word: ");
    scanf("%s", str); // No need for &str, as str is already an array
    lt(str);
    return 0;
}
