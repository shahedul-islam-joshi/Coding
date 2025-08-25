#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);



    // Print the series of factorials (optional)
    printf("  1");
    for (int i = 2; i <= n; i++) {
        printf(" + %d!", i); // Print the factorial term

    }


printf("\n1");

    // Calculate the sum of factorials
    for (int i = 2; i <= n; i++) {
        fact *= i; // Calculate factorial
        printf(" + %d!", fact);
        sum += fact; // Add current factorial to sum
    }
printf("\nThe sum of factorials of 1 to %d is: %d\n", n, sum);

    return 0;
    }



