#include <stdio.h>
void lt(char str[])
{
    int i=0, flag = 1;
    while(str[i]!='\0'){
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
            flag++;
        }
        i++;
    }
    printf("Total number of words: %d",flag);
}
int main()
{
    char str[100];
    printf("Enter word: ");
    gets(str);
    lt(str);

    return 0;
}
