#include<stdio.h>
int main ()
{
    int n;
    float sum = 0;
    int fact = 1;



    printf ("Enter range: ");
    scanf ("%d",&n);


 printf("1/1!");
 sum = 1;


    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
        printf(" + %d/%d!",i,i);
        sum = sum + ((float)i/fact);
    }

    printf (" = %.2lf\n\n",sum);
}

