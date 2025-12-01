#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;
    printf("\n Enter the number: ");
    scanf("%d", &n);

    if (n <= 1) isPrime = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    if (isPrime)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    return 0;
}
