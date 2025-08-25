#include <stdio.h>
int main ()
{
    int epic = 0, binary = 1, count = 0, n, Joshi;


    printf ("Enter range: ");
    scanf ("%d",&n);


    printf("Fibonacci series:\n");


    while (count<n)

    {
        if (count <=1)
            Joshi = count;

            else
            {
                Joshi = epic + binary;
                epic = binary;
                binary = Joshi;
            }


            printf ("\n  %d \n",Joshi);
count ++;

}


    }




