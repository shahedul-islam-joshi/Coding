#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    char st[n][100]; // Array to store student names
    int mr[n];       // Array to store student marks

    // Input student names and marks
    for (i = 0; i < n; i++) {
        printf("\n[%d] Student name: ", i + 1);
        scanf("%s", st[i]);

        printf("[%d] Student total marks: ", i + 1);
        scanf("%d", &mr[i]);
    }

    // Sort the students based on their marks in descending order using insertion sort
    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && mr[j - 1] < mr[j]) {
            // Swap marks
            int temp = mr[j];
            mr[j] = mr[j - 1];
            mr[j - 1] = temp;

            // Swap names
            char temp_name[100];
            int k;
            for (k = 0; st[j][k] != '\0' || st[j - 1][k] != '\0'; k++) {
                temp_name[k] = st[j][k];
                st[j][k] = st[j - 1][k];
                st[j - 1][k] = temp_name[k];
            }

            j--;
        }
    }

    // Print the sorted list with merit positions
    printf("\nMerit Position\tStudent Name\tTotal Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\n", i + 1, st[i], mr[i]);
    }

    return 0;
}
