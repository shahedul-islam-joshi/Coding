#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    char st[n][100]; // Array to store student names
    int mr[n]; // Array to store student marks

    // Input student names and marks
    for (i = 0; i < n; i++) {
        printf("\n[%d] Student name: ", i + 1);
        scanf("%s", st[i]);

        printf("[%d] Student total marks: ", i + 1);
        scanf("%d", &mr[i]);
    }

    // Sort the students based on their marks in descending order using selection sort
    for (i = 0; i < n - 1; i++) {
        int max_index = i;
        for (j = i + 1; j < n; j++) {
            if (mr[j] > mr[max_index]) {
                max_index = j;
            }
        }
        // Swap marks
        int temp = mr[max_index];
        mr[max_index] = mr[i];
        mr[i] = temp;

        // Swap names
        for (j = 0; st[i][j] != '\0' || st[max_index][j] != '\0'; j++) {
            char temp_char = st[i][j];
            st[i][j] = st[max_index][j];
            st[max_index][j] = temp_char;
        }
    }

    // Print the sorted list with merit positions
    printf("\nMerit Position\tStudent Name\tTotal Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\n", i + 1, st[i], mr[i]);
    }

    return 0;
}

