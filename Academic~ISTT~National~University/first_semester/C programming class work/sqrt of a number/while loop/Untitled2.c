#include <stdio.h>
int main ()
{
    int count = 0, result = 1;
    int num,pow;

    printf ("Enter a number: ");
    scanf ("%d",&num);


    printf ("Enter power: ");
    scanf ("%d",&pow);


// Multiply the number 'n' times using a while loop

    while (count<pow)
    {
        result=result*num;      // Multiplying result with number
        count++;
    }

    printf ("%d",result);
}
