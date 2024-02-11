#include <stdio.h>
int octal(int n)
{ 
    int o[1000], i = 0; 
    while (n != 0) {  
        o[i] = n % 8; 
        n = n / 8; 
        i++; 
    }  
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", o[j]);  

}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    octal(num);
    return 0;
}
