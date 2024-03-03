#include <stdio.h>
#include <string.h>

int main() {
    char str[100],s;
    int temp;
    printf("Enter the input string: ");
    gets(str);
    printf("Enter the input string: ");
    scanf("%c",&s);
    int l =strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==s){
            for(int j=i;j<l-1;j++)
        {
         str[j]=str[j+1];
        }
        }
    }
    str[l-1]='\0';
    l--;
    
    printf("%s ",str);
    return 0;
}
