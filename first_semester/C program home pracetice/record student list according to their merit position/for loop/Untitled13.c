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
        scanf("%s", &st[i]);

        printf("[%d] Student total marks: ", i + 1);
        scanf("%d", &mr[i]);
    }

    // Sort the students based on their marks in descending order using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (mr[j] < mr[j + 1]) {
                // Swap marks
                mr[j] = mr[j] + mr[j + 1];
                mr[j + 1] = mr[j] - mr[j + 1];
                mr[j] = mr[j] - mr[j + 1];

                // Swap names
                int k;
                char temp;
                for (k = 0; st[j][k] != '\0' || st[j + 1][k] != '\0'; k++) {
                    temp = st[j][k];
                    st[j][k] = st[j + 1][k];
                    st[j + 1][k] = temp;
                }
            }
        }
    }

    // Print the sorted list with merit positions
    printf("\n|Merit Position   |Student Name              |Total Marks\n");
    for (i = 0; i < n; i++) {
        printf("|%d             |%s                        |    %d\n", i + 1, st[i], mr[i]);
    }

    return 0;
}
