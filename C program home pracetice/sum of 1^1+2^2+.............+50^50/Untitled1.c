#include <stdio.h>
#include <math.h>

int main ()
{
    int i, n;
    unsigned long long sum = 0; // Using unsigned long long to handle large sums


    printf("Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // Loop from 1 to n
    {
        sum = sum + (unsigned long long)pow(i, i); // Casting the result of pow to unsigned long long
    }

    printf("Summation of the series is: %lld\n", sum); // Correct format specifier for unsigned long long

    return 0;
}
