#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int bill[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[n];
    int dayTotal[m];
    for (int i = 0; i < n; i++) studentTotal[i] = 0;
    for (int j = 0; j < m; j++) dayTotal[j] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, studentTotal[i]);
    }
    int maxDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }

    printf("\nHighest collection on Day %d\n", maxDay + 1);


    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    printf("Highest spender: ");
    int firstPrinted = 0;

    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (firstPrinted)
                printf(" and Student %d", i + 1);
            else {
                printf("Student %d", i + 1);
                firstPrinted = 1;
            }
        }
    }
    printf(".");
    return 0;
}
