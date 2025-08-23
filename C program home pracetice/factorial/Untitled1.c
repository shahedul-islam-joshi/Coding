#include <stdio.h>
int main ()
{
    int i = 1, Joshi = 1, n;


    printf ("Enter any positive number: ");
    scanf ("%d",&n);



    for (i;i<=n;)
    {
        Joshi = Joshi * i;
        i++;
    }



    printf ("%d! = %d", n,Joshi);
}
