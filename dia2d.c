#include <stdio.h>
int main()
{
    int n, m, s=0;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("Enter number columns : ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter elements for 1st matrix:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==j){
            s= s+a[i][j] ;
        }
        }
    }
    printf("Sum of diagonal elememts matrix: %d",s);

    return 0;
}
