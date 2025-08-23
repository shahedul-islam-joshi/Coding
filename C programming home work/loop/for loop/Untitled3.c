#include <stdio.h>

int main() {
    double x, y = 1.0;
    int n, i;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // For loop to calculate x^n iteratively:
    for (i = 1; i <= n; ++i) {
        y = y*x;  // Multiply y by x in each iteration
    }

    printf("x^n = %.2lf\n", y);

    return 0;
}

