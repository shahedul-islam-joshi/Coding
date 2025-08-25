#include <stdio.h>
int main ()
{
    int n,i,sum=0;
    printf ("Enter the value of n: ");
    scanf ("%d",&n);
    for (i=1;i<=n;++i)
    {
        sum=sum+i*i;
    }
    printf ("The sum of squares of 1 to %d is : %d\n",n,sum);
}
