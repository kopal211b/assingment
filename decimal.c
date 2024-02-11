#include <stdio.h>
int binary(int n)
{ 
    int num = n; 
    int d = 0, b= 1, temp = num; 
 
    while (temp) { 
        int l = temp % 10; 
 
        temp = temp / 10; 
        d+= l * b; 
        b = b * 2; 
    } 
    printf (" Decimal equivalent: %d",  d); 

}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}
