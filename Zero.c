// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
    printf("Try programiz.pro");
int n;
scanf("%d",&n);
int *e=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",e+i);
}
int l=0;
for(int i=0;i<n;i++){
    if(*(e+i)!=0){
        *(e+l)=*(e+i);
        l++;
    }
}
for(int i=l;i<n;i++){
    *(e+i)=0;
}

for(int i=0;i<n;i++){
    printf("%d ",*(e+i));}

free(e);
    return 0;
}
