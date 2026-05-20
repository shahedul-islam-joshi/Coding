#include <stdio.h>
#include <math.h>  // Include math.h for sqrt()

int main() {
    int x, i;
    float sqr;

    for (i = 0; i < 5; ++i) {
        printf("Enter a number: ");
        scanf("%d", &x);

        if (x < 0) {
            continue;  // Skip to the next iteration if x is negative
        }

        sqr = sqrt(x);  // Calculate square root if x is non-negative
        printf("Result = %f\n", sqr);  // Print result with newline
    }

    return 0;
}

