#include <stdio.h>
{
    int n, m,col;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++){
        printf("Enter element at %d %d: ", i+1,j+1);
        scanf("%d", &a[i][j]);
        }
    }
    int min=a[0][0];
    printf("Enter column number: ");
    scanf("%d", &col);
    for(int j=0;j<n;j++){
        if (min>a[j][col-1]){
            min=a[j][col-1];
        }
        }
    printf("Minimum element in row %d is: %d ",col,min);
    
    return 0;
}
