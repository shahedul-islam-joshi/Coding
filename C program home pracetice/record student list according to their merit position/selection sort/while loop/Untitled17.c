#include <stdio.h>

int main() {
    int i = 0, j, n;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    char st[n][100]; // Array to store student names
    int mr[n]; // Array to store student marks

    // Input student names and marks
    while (i < n) {
        printf("\n[%d] Student name: ", i + 1);
        scanf("%s", st[i]);

        printf("[%d] Student total marks: ", i + 1);
        scanf("%d", &mr[i]);

        i++;
    }

    // Sort the students based on their marks in descending order using selection sort
    i = 0;
    while (i < n - 1) {
        int max_index = i;
        j = i + 1;
        while (j < n) {
            if (mr[j] > mr[max_index]) {
                max_index = j;
            }
            j++;
        }
        // Swap marks
        int temp = mr[max_index];
        mr[max_index] = mr[i];
        mr[i] = temp;

        // Swap names
        j = 0;
        while (st[i][j] != '\0' || st[max_index][j] != '\0') {
            char temp_char = st[i][j];
            st[i][j] = st[max_index][j];
            st[max_index][j] = temp_char;
            j++;
        }

        i++;
    }

    // Print the sorted list with merit positions
    printf("\nMerit Position\tStudent Name\tTotal Marks\n");
    i = 0;
    while (i < n) {
        printf("%d\t\t%s\t\t%d\n", i + 1, st[i], mr[i]);
        i++;
    }

    return 0;
}
