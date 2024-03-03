#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    printf("Enter the input string: ");
    scanf("%s", str);
    int l =strlen(str);
    for(int i=0;i<l;i++){
         for (int j = i+1; j < l; j++) {     
           if(str[i] > str[j]) {    
               temp = str[i];    
               str[i] = str[j];    
               str[j] = temp;    
           }   
         }
    }
         puts(str);
    return 0;
}
