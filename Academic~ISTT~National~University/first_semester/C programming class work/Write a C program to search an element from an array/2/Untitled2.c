#include <stdio.h>
int main ()
{
    int x[10],i,y;
   {
       printf ("Enter 10 numbers: ");
    for (i=0;i<10;++i)
        scanf ("%d",&x[i]);
   }
   {
       printf ("Element to be searched: ");
    scanf ("%d",&y);
   }
   {
       for (i=0;i<10;++i)
           if (y==x[i])
           {
           printf ("Element is found at position %d\n",i);
           break;
       }
       if (i==10)
        printf ("Not found\n");
   }

}
