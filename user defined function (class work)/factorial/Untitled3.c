#include <stdio.h>
long int fact (int);    // Function prototype for `fact` to calculate factorial

int main ()
{
    int n, factorial;

    printf ("Enter an integer: ");
    scanf ("%d",&n);


    factorial = fact (n);    // Function call to calculate factorial

    printf ("%d! = %d", n, factorial);

    return 0;
}


long int fact (int n)


{
    int i, factorial = 1;

    for (i=1; i<=n;i++)
    {
        factorial = factorial*i;
    }

    return factorial;
}
