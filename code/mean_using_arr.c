#include<stdio.h>
int main()
{
    int n, i;
    float sum = 0.0, mean;
    printf("Enter the number of elements: ");
    scanf ("%d", &n);
    float numbers[n];
    printf ("Enter %d numbers:\n", n);
    for(i=0; i<n; i++)
{
    scanf ("%f", &numbers [i]);
    sum += numbers [i];
}
    mean = sum / n;
    printf ("Mean = %.2f\n", mean);
    return 0;
}
