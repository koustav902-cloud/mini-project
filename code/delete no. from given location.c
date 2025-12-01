#include <stdio.h>
int main()
{
    int arr[100], n, pos, i;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (i = pos-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];pla
        }
        n--;
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
