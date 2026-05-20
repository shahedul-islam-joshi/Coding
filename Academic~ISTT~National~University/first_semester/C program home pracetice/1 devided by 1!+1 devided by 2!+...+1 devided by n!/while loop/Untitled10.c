#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    float factorial = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("1/1!"); // Print the first term of the series
    sum += 1.0 / factorial; // Add the first term to the sum

    int i = 2; // Start with i = 2 for the second term

    while (i <= n)
        {
        factorial *= i; // Calculate factorial
        printf(" + 1/%d!", i); // Print the next term
        sum += 1.0 / factorial; // Add next term to sum
        i++; // Increment i
    }

    printf(" = %.2lf\n", sum); // Print the result

    return 0;
}
