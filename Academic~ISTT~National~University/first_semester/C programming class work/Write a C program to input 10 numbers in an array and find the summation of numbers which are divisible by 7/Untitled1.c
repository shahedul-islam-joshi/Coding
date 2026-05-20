#include<stdio.h>
int main()
{
    int x[10],i,sum=0;
    printf ("Enter 10 numbers: ");
    for (i=0;i<10;++i)
    {
      scanf ("%d",&x[i]);
    }
    for (i=0;i<10;++i)
    {
        if (x[i]%7==0)
            sum=sum+x[i];
    }
    printf ("Result:%d ",sum);
}
