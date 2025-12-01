#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);  // Number of students

    int attendance[n];

    // Input attendance values (0 or 1 for each student)
    for (int i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);
    }

    int present = 0;  // Count of students present
    int absent = 0;   // Count of students absent

    // Count present and absent students
    for (int i = 0; i < n; i++) {

        if (attendance[i] == 1) {
            present++;   // Student is present
        }
        else {
            absent++;    // Student is absent
        }
    }

    // Output results
    printf("Present: %d\n", present);
    printf("Absent: %d\n", absent);

    return 0;
}
N
