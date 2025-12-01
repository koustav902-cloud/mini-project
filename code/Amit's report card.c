#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);  // Number of subjects

    int marks[n];

    // Input marks
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Initialize highest and lowest with the first mark
    int highest = marks[0];
    int lowest = marks[0];

    // Find max and min
    for (int i = 1; i < n; i++) {

        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    // Output results
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);

    return 0;
}
