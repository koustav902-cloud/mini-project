#include<stdio.h>
int main()
{
    int n, i;
    printf("\n Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter %d numbers:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest, second;
    if (arr[0]>arr[1])
    {
        largest=arr[0];
        second=arr[1];
    }
    else
    {
        largest=arr[1];
        second=arr[0];
    }
    for (i=2; i<n; i++)
    {
        if (arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest)
        {
            second=arr[i];
        }
    }
    printf("\n The second largest number is: %d\n", second);
    return 0;
}
