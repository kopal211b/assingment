#include <stdio.h>
int main(){
      int n, m;
    printf("Enter number of rows and columns for square: ");
    scanf("%d", &n);
    printf("Enter number of rows and columns for square: ");
    scanf("%d", &m);
    int arr[n][m], a[n][m];
    printf("Enter elements for matrix:\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[j][i] = arr[i][j];
        }
    }
    printf("Transpose: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
  return 0;
}
