#include <stdio.h>
#include <math.h>
int main ()
{
    int x,i;
    float sqr;
    for (i=0;i<5;++i)
    {
        printf ("Enter a number: ");
        scanf ("%d",&x);
        if (x<0)
        {
            continue;
        }
        sqr=sqrt(x);
        printf ("Result=%f\n",sqr);
    }
    return 0;
}
