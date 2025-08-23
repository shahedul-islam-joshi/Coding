#include<stdio.h>

long int fact (int);

int main ()
{
    int n;

    printf ("Enter the value of n: ");
    scanf ("%d",&n);

    printf ("The fact value is %ld", fact(n));

    return 0;
}



long int fact(int n)

{
    if (n == 1)

    {
        return 1;
    }

    else

        return  n*fact(n-1);
}
