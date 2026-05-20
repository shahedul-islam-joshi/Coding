#include <stdio.h>

int main() {
    int x[2][3], y[3][3], z[2][3]; // Declare z with appropriate size
    int i, j, k;

    printf("Enter 1st matrix: ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("Enter 2nd matrix: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &y[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            {
            z [i] [j]=0;
    }
for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            for (k=0;k<3;k++)
        {
            z[i][j]=z[i][j]+x[i][k]*y[k][j];
        }


    printf("The result is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            {
            printf(" %d ", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
