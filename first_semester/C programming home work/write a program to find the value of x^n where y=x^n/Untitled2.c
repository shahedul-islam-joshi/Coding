#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using pow() function from math.h library:
    y = pow(x, n);

    printf("x^n = %.2lf\n", y);

    return 0;
}
