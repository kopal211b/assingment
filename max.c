#include <stdio.h>
int max(int n) {
   int num,max=0;
   	for(int i=1;i<=n;i++)
	{
		printf("Enter: %d : ",i);
		scanf("%d",&num);

		if(max < num)
			max = num;
	}
	printf("\n Max = %d",max);
}
int main(){
    int num;
    printf("Enter number of numbers to be entered: ");
    scanf("%d", &num);
    max(num);
    return 0;
}
