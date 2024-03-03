#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns for 1st matrix: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter element at %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int k=m*n;
    int p=0;
    int add[k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            add[p++] = arr[i][j];
        }
     }
     
int temp;
  for (int i = 0; i < k; ++i){
  for (int j = i + 1; j < k; ++j){
      if (add[i] > add[j]){
         temp = add[i];
         add[i] = add[j];
         add[j] = temp;
      }
  }
}
p=0;
for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j]=add[p++];
        }
    }

printf("\n");
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
