#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("Enter the value of a,b,c");
    scanf ("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
            printf ("The largest value is a");
        else
            printf ("The largest value is c");

    }
    else
    {
        if (b>c)
            printf ("b is max");
        else
            printf ("c is max");

    }
    return 0;
}
