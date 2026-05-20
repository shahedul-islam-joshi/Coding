#include <stdio.h>

int main() {
    double x, y = 1.0;
    int n, i = 1;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // While loop to calculate x^n iteratively:
    while (i <= n) {
        y *= x;  // Multiply y by x in each iteration
        ++i;     // Increment the counter
    }

    printf("x^n = %.2lf\n", y);

    return 0;
}

