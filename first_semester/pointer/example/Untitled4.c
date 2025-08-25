#include <stdio.h>
int main ()
{
    int x,y;
    int *p;
    int *q;
    p = &x;
    q = &y;


    printf ("Enter two integer:  ");
    scanf ("%d%d", p, q);


    printf ("%d             %d",  p,q);


    printf ("     %d   %d", *p,*q);


    printf ("\n%d             %d",  p+1,q+1);

}
