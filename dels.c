#include <stdio.h>
#include <string.h>
int main(){
char str[100];
    printf("Enter word: ");
    scanf("%s", str);
    char s;
    int k;
    printf("Enter key: ");
    scanf(" %c", &s);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == s) {
             
            for (int j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0'; 
            len--;
        }
    }

    printf("Updated string: %s",str);
    return 0;
}
