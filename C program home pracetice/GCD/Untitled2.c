#include <stdio.h>
int main ()
{
    int i,k,min,n,arr[100];
    int gcd;




printf ("Enter the numbers of elements: ");
scanf ("%d",&n);



printf ("\nEnter %d integers:\n",n);
for (i=0;i<n;i++)
{
    printf ("\nNumber [%d] = ",i+1);
    scanf ("%d",&arr[i]);
}



printf ("\nEntered integers: ");
for (i=0;i<n;i++)
{
    printf (" %d ",arr[i]);
}


min=arr[0];

       for (i=0;i<n;++i)
       {
           if (arr[i]<min)
            min=arr[i];
            else
            min=min;
       }

     printf ("\n%d is the min number",min);


k=min;
      printf ("\n%d is assigned to variable k\n", k);



      // Find the greatest common divisor (GCD)
    for (k = min; k >= 1; k--)
        {
        int found = 1;
        for (i = 0; i < n; i++) {
            if (arr[i] % k != 0) {
                found = 0;
                break;
            }
        }
        if (found) {
            gcd = k;
            break;
        }
    }

    printf("\nGCD = %d\n", gcd);

    return 0;
}

