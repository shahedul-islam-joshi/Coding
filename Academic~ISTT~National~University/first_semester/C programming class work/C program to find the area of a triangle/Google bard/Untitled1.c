#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double s, area;

    printf("Enter the value of a, b, c: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("Invalid input!\n");
        return 1;
    }

    s = (a + b + c) / 2.0; // Force double-precision division
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    if (area <= 0) {
        printf("Invalid triangle!\n");
        return 1;
    }

    printf("The area of triangle is %.2lf\n", area);

    return 0;
}

