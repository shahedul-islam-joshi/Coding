#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The two roots are: %.2lf, %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root
        root1 = root2 = -b / (2 * a);  // Fixed calculation and added missing parenthesis
        printf("The two roots are equal and value is %.2lf\n", root1);
    } else {
        // Two complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);  // Calculate sqrt of -discriminant
        printf("root1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}

