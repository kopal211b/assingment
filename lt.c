#include <stdio.h>
void lt(int n,int m,int arr[][m])
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                arr[i][j] = 0;
            }
        }
    }
    printf("Lower trinagular: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
     int n, m;
    printf("Enter number of rows and columns for square: ");
    scanf("%d", &n);
    printf("Enter number of rows and columns for square: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter elements for matrix:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    lt(n,m,arr);
    return 0;
}
