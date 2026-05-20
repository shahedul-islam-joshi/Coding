#include<stdio.h>

long int power(int, int);  // Prototype declaration

int main()
{
    int x, n;
    long int p;

    printf("Enter the value of x & n: ");
    scanf("%d%d", &x, &n);

    p = power(x, n);   // Function call

    printf("The result is: %ld", p);
    return 0;
}


long int power(int a, int b)


 {
    int i;
    long int x = 1;
    for (i = 1; i <= b; i++)
        {
        x = a * x;
    }
    return x;
}
