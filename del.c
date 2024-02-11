#include <stdio.h>
int main()
{
    int n, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nElement at %d: ", i+1);
        printf("%d ", arr[i]);
    }
    printf("\nEnter position: ");
    scanf("%d", &pos);
    if (pos >= n + 1 || pos<0)
        printf("\nDeletion not possible.");

    else
    {
        for (int c = pos - 1; c < n - 1; c++)
        {
            arr[c] = arr[c + 1];
        }
    }
    printf("\nArray after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nElement at %d: ", i+1);
        printf("%d ", arr[i]);
    }
    return 0;
}
