#include <stdio.h>

int main ()


{
    int i = 1, Joshi = 1, n;

    printf ("Enter any positive number: ");
    scanf ("%d", &n);

    while (i <= n) {
        Joshi = Joshi * i;
        i++;
    }

    printf ("\n%d! = %d\n\n\n\n", n, Joshi);

    return 0;
}

