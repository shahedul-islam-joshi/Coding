#include <stdio.h>
#include <math.h>
int main ()
{
    int x,i;
    float sqr;
    for (i=0;i<5;++i)
    {
        printf ("Enter a number:\n ");
        scanf ("%d",&x);
        if (x<0)
            break;
        sqr=sqrt(x);
        printf ("Result =%f\n",sqr);
    }
}
