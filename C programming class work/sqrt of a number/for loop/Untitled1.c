#include <stdio.h>
int main ()
{
    int i,j;
    int num,pow,result=1;

    printf ("Enter a number: ");
    scanf ("%d",&num);


    printf ("Enter power: ");
    scanf ("%d",&pow);


    for (i=0;i<pow;i++)
    {
         result=result*num;   // Multiplying result with number
    }


    printf ("SQRT is: %d",result);
}
