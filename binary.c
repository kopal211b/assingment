#include <stdio.h>
int binary(int n)
{
    int arr[1000],rem=n,i=0;
    while(rem>0){
        arr[i]=rem%2;
        rem=rem/2;
        i++;
    }
    printf("Binary equivalent of %d is ",n);
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}
