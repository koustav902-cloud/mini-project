#include<stdio.h>
int main()
{
    int n, i, ar[20];
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Entered: \n");
    for(i=0; i<n; i++)
    {
        printf("%d \t", ar[i]);
    }
    return 0;
}
