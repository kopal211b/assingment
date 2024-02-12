
#include <stdio.h>  
int main() 
{ 
    char str[1000]; 
    printf("enter: ");
    gets(str); 
    int v = 0, c = 0; 
    char ch;  
    for (int i = 0; str[i] != '\0'; i++) {  
        ch = str[i]; 
    if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
        {   
            v++; 
      }  
        else if (ch == ' ') 
        { 
          continue; 
        }
 
        else{
              c++; 
        }
    } 
    printf("\nVowels: %d", v); 
    printf("\nConsonants: %d", c);
 
    return 0; 
} 
