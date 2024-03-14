#include <stdio.h>
#include <string.h>

int main (void) {
   char s1[90];
   gets(s1);
   
   for (int i = 0; s1[i]!='\0'; i++) {
     if(s1[i]!=' '){
         printf("%c",s1[i]);
     }
     else{
         printf("\n");
     }
   }


   return 0;
}
