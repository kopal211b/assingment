
#include <stdio.h>
#include <string.h>
int main() {
   char str1[10],str2[90];
   gets(str1);
   gets(str2);
   int b;
   scanf("%d",&b);
   int l1,l2,c=0;
   l1=strlen(str1);
   l2=strlen(str2);
   if (b>l1){
       printf("Index not present ");
   }
   else {
       l1=l1+l2;
       for(int i=b;i<l1;i++){
           str1[i]=str2[c++];
       }
          str1[l1--]='\0';
   puts(str1);
      
   }
    return 0;
}
