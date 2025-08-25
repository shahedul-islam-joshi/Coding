#include <stdio.h>

int main() {
    int x[2][3], y[3][3], z[2][3];
    int i, j, k;

    // Input for the first matrix
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &x[i][j]);

    // Input for the second matrix
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &y[i][j]);

    // Matrix multiplication
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++) {
            z[i][j] = 0;
            for (k = 0; k < 3; k++)
               {
                   z[i][j] =z[i][j]+ x[i][k] * y[k][j];
               }
        }

    // Display the result
    printf("Resultant matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", z[i][j]);
        printf("\n");
    }

    return 0;
}
