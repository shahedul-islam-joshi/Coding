#include <stdio.h>
int main ()
{
    int sum=0;

    for (int i=50;i<=500;++i)
    {
        if (i%7==0)
            sum=sum+i;
    }
    printf ("%d",sum);
    return 0;
}
