#include <stdio.h>
void lt(int n, int m, int arr[][m])
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 1;
                break;
            }
            if (i != j && arr[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }
    (flag==0)?printf("Identity Matrix"):printf("Not an Identity Matrix");
}
int main()
{
    int n, m, n1, m1;
    printf("Enter number of rows and columns for square: ");
    scanf("%d", &n);
    printf("Enter number of rows and columns for square: ");
    scanf("%d", &m);
    // printf("Enter number of rows and columns for square: ");
    // scanf("%d", &n1);
    // printf("Enter number of rows and columns for square: ");
    // scanf("%d", &m1);
    int arr[n][m];
    // int a[n1][m1];
    printf("Enter elements for matrix:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    lt(n, m, arr);
    return 0;
}
