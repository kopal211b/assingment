#include <stdio.h>
#include <string.h>
void pal(char rev[],char str[])
{ char temp,temp1[90];
    int flag = 0;
    int l=strlen(str);
    for(int i=0;i<l;i++){
       if(str[i]!=rev[i]){
           flag=1;
           break;
       }
    }
    (flag==0)?printf("Palindrome."):printf("Not palindrome");
}
void lt(char str[])
{ char temp,temp1[90];
    int flag = 0;
    int l=strlen(str);
    for(int i=0;i<l;i++){
       temp1[i]=str[i];
        
    }
    for(int i=0;i<l/2;i++){
       temp=temp1[i];
       temp1[i]=temp1[l-i-1];
       temp1[l-i-1]=temp;
        
    }
    pal(temp1,str);
    //(flag==0)?printf("Palindrome."):printf("Not palindrome");
}
int main()
{
    char str[100];
    printf("Enter word: ");
    scanf("%s",&str);
    lt(str);
    return 0;
}
