#include<stdio.h>
int main ()
{
    //array declaration for matrix
    int Matrix [10][10],Transpose [10][10];

    //variable to store the dimension of matrix
    int columns,rows;

    //loop variable
    int i,j,k;


    //get matrix dimension from user
    printf ("Enter the rows & columns for matrix: ");
    scanf ("%d %d", &rows, &columns);


    //input elements for matrix
    printf ("\nEnter elements for matrix:\n ");
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            printf ("\nMatrix [%d] [%d] = ", i,j);
            scanf ("%d", &Matrix [i][j]);
        }
    }


    //printing matrix

    printf("\nEntered matrix:\n\n ");
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            printf (" %d\t ",Matrix [i][j]);
        }
        printf (" \n ");
    }


    //make transpose matrix



    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            Transpose[j][i]=Matrix [i][j];
        }
    }


    //printing transpose matrix


    printf ("\nTranspose matrix:\n\n ");
    for (i=0;i<columns;i++)
      {
         for (j=0;j<rows;j++)
         {
             printf (" %d\t ",Transpose [i][j]);
         }
         printf (" \n ");
      }


}
