#include <stdio.h>
int main ()
{
    int i,sum=0,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        sum=sum+i;
        ++i;
    }
    printf ("The sum of the series is %d", sum);
}
