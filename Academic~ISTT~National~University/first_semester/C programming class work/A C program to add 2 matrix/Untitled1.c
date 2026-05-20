#include <stdio.h>
int main ()
{
    int x[3][2],y[3][2],z[3][2];
    int i,j;
    printf ("Enter 1st matrix: ");
    for (i=0;i<3;i++)
        for (j=0;j<2;j++)
    {
        scanf ("%d",&x[i][j]);
    }
    printf ("Enter 2nd matrix: ");
    for (i=0;i<3;i++)
        for (j=0;j<2;j++)
    {
        scanf ("%d",&y[i][j]);
    }
    for (i=0;i<3;i++)
        for (j=0;j<2;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
        printf ("The result is :\n");
        for (i=0;i<3;i++)
        {
           for (j=0;j<2;j++)
           {
               printf (" %d ",z[i][j]);
           }
           printf (" \n ");
        }

    return 0;
}
