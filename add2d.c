#include <stdio.h>
int main()
{
    int n, m, col, n1 = n, m1 = m;
    printf("Enter number of rows for 1st and 2nd matrix: ");
    scanf("%d", &n);
    printf("Enter number columns for 1st and 2nd matrix: ");
    scanf("%d", &m);
    int a[n][m];
    int arr[n][m];
    printf("Enter elements for 1st matrix:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements for 2nd matrix:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int add[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            add[i][j] = a[i][j] + arr[i][j];
        }
    }
    printf("Addition matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", add[i][j]);
        }
    printf("\n");
    }

    return 0;
}
