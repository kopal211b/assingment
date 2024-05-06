// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char c[40];
    scanf("%s",c);
    int num=0;
    int l=strlen(c);
    for(int i=l-1;i>=0;i--){
        num=num*10+ *(c+i)-48;
      
if(num%2!=0){
            for(int j=0;j<=i;j++){
                printf("%c",*(c+j));
                
            }
    break;
}
        num=0;
    }

    return 0;
}
