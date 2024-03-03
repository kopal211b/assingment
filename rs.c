#include <stdio.h>
#include <string.h>

int main() {
    char str[100],s;
    int temp;
    printf("Enter the input string: ");
    gets(str);
    printf("Enter the input string: ");
    scanf("%c",&s);
    printf("\nEnter the input string: ");
    scanf("%d ",&temp);
    int l =strlen(str);
    for(int i=l;i>temp;i++){
         str[i+1]=str[i];
    }
    str[temp]=s;
    str[l-1]='\0';
    printf("%s ",str);
    return 0;
}
