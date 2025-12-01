#include <stdio.h>
int main() {
    int n, i;
    int total = 0;
    float average;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = (float)total / n;
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    return 0;
}
