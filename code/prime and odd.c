#include <stdio.h>
int main()
{
    int number;
    printf("\n Enter the number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
    if (number % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not Divisible by 5\n");
    return 0;
}
