#include <stdio.h>
#include <string.h>

int main (void) {
   char s1[90], s2[90];
   gets(s1);
   gets(s2);
   char temp;
   int n  = strlen(s1);
   int n1 = strlen(s2);

   if( n != n1) {    
      printf("Strings are not anagrams!";
   }
   
else{
   for (int i = 0; s1[i]!='\0'; i++) {
      for (int j = i+1; s1[j]!='\0'; j++) {
         if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
         if (s2[i] > s2[j]) {
            temp  = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
         }
      }
   }


   for(int i = 0; i<n; i++) {
      if(s1[i] != s2[i]) {    
         printf("Strings are not anagrams! \n", s1, s2);
        break;
      }
   }

   printf("Strings are anagrams! \n");}
   return 0;
}
