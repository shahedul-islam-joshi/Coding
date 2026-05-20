#include <stdio.h>
int main ()
{
    int arr [100];
    int n,i,max;

    printf ("Enter the number of element (maximum 100): ");
    scanf ("%d",&n);

    printf ("Enter %d integers numbers:",n);
    for (i=0; i<n; i++)
    {
        printf ("\nNumber [%d]= ",i+1);
        scanf ("%d",&arr[i]);
    }

    printf ("Entered integers:\n");
    for (i=0; i<n; i++)
    {
        printf ("%d  ",arr[i]);
    }
       max=arr[0];

       for (i=0;i<n;++i)
       {
           if (arr[i]>max)
            max=arr[i];
            else
            max=max;
       }

       printf ("\n%d is the max number",max);
}
