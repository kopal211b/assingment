#include <stdio.h>
#include <string.h>

int main() {
    char str[100],s,temp;
    printf("Enter the input string: ");
    gets(str);
    printf("Enter the character to replace : ");
    scanf(" %c",&s);
    printf("Enter the character to replace with: ");
    scanf(" %c ",&temp);
    int l =strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==s)
         str[i]=temp;
    }
    printf("%s ",str);
    return 0;
}
