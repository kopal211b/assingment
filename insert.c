#include <stdio.h>
int main()
{
    int n, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array before instertion: ");
        for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }
    printf("Enter number to be inserted: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    n++;
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    printf("Array after instertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
