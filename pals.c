#include <stdio.h>
#include <string.h>
void lt(char str[])
{
    int flag = 0;
    int l=strlen(str);
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            flag=1;
            break;
        }
    }
    (flag==0)?printf("Palindrome."):printf("Not palindrome");
}
int main()
{
    char str[100];
    printf("Enter word: ");
    scanf("%s",&str);
    lt(str);
    return 0;
}
