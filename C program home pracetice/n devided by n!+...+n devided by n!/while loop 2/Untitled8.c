#include<stdio.h>

int main()
{
    int n;
    float sum = 0;
    int fact = 1;
    int i = 1;

    printf("Enter range: ");
    scanf("%d", &n);

    printf("1/1!");

    sum = 1; // Start the sum with 1/1!

    while (i < n)
        {
        fact = fact * (i + 1); // Update factorial
        printf(" + %d/%d!", i + 1, i + 1);
        sum = sum + (float)(i + 1) / fact;
        i++;
    }

    printf(" = %.2lf\n\n", sum);

    return 0;
}
