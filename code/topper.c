#include <stdio.h>
int main() 
{
    int A[5][3];  
    printf("Enter marks of 5 students in 3 subjects:\n");
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    int maxMath = A[0][0];
    int maxPhy = A[0][1];
    int maxCS = A[0][2];
    for (int i = 1; i < 5; i++)
    {
        if (A[i][0] > maxMath) maxMath = A[i][0];
        if (A[i][1] > maxPhy) maxPhy = A[i][1];
        if (A[i][2] > maxCS) maxCS = A[i][2];
    }
    printf("Highest marks in Mathematics: %d\n", maxMath);
    printf("Highest marks in Physics: %d\n", maxPhy);
    printf("Highest marks in Computer Science: %d\n", maxCS);
    return 0;
}
