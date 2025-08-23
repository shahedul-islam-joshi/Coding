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

    // Sort the students based on their marks in descending order using bubble sort
    i = 0;
    while (i < n - 1) {
        j = 0;
        while (j < n - i - 1) {
            if (mr[j] < mr[j + 1]) {
                // Swap marks
                int Joshi = mr[j];
                mr[j] = mr[j + 1];
                mr[j + 1] = Joshi;

                // Swap names
                int k = 0;
                while (st[j][k] != '\0' && st[j + 1][k] != '\0') {
                    char Joshi_char = st[j][k];
                    st[j][k] = st[j + 1][k];
                    st[j + 1][k] = Joshi_char;
                    k++;
                }
                // Add null terminator at the end of the shorter name
                st[j][k] = '\0';
                st[j + 1][k] = '\0';
            }
            j++;
        }
        i++;
    }

    // Print the sorted list with merit positions
    printf("\nMerit Position\tStudent Name\tTotal Marks\n");
    i = 0;
    while (i < n) {
        printf("%d\t\t%s\t\t%d\n", i , st[i], mr[i]);
        i++;
    }

    return 0;
}

