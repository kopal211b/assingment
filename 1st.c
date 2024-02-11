#include <stdio.h>
//Program for Palindrome number
int pal(int n){
    int temp=n,rev=0,rem;
    while(n!=0){
        rem= n%10;
        rev=rev*10+rem;
        n /=10;
    }
    (temp==rev)? printf("Palindrome"):printf("Not Palindrom");
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    pal(num);  
     return 0;
}
