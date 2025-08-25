#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int fact = 1;
    int i=2;

    printf("Enter the value of n: ");
    scanf("%d", &n);



    // Print the series of factorials (optional)
    printf("  1!");
while (i<=n)
{
        printf(" + %d!", i); // Print the factorial term
        i++;

    }


printf(" \n= 1");
i=2;

    // Calculate the sum of factorials
while (i<=n)        {

        fact *= i; // Calculate factorial
        printf("  + %d", fact);
        sum += fact; // Add current factorial to sum
i++;
    }
printf("\nThe sum of factorials of 1 to %d is: %d\n", n, sum);

    return 0;
    }




