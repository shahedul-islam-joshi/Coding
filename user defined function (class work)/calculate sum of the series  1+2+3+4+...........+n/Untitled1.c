#include <stdio.h>
long int sum (int);              //prototype declaration
int main ()
{
    int i, n, summation;

    printf ("Enter the value of n:  ");
    scanf ("%d",&n);



    summation = sum (n);     //function call


    printf("The result of the sum 1 to %d is : %d", n, summation);
    return 0;
}


long int sum (int n )     //function definition


{
    int i = 1;
    int sum = 0;
     while (i<=n)
     {
         sum = sum + i;
         i++;
     }
     return sum;
}



