#include <stdio.h>
int main ()

{
    // array declaration for matrices A, B, and the product matrix
    int A[10][10], B[10][10], Product[10][10];
    // variables to store the dimensions of matrices
    int A_rows, A_columns, B_rows, B_columns;
    // loop variable
    int i, j, k;


 //Get matrix dimension from user

    //input row & columns for matrix A
    printf ("Enter rows & columns for A matrix: ");
    scanf ("%d %d", &A_rows, &A_columns);

    //input row & columns for matrix A
    printf ("\nEnter rows & columns for B matrix: ");
    scanf ("%d %d", &B_rows, &B_columns);

    // validate the dimensions of matrices A and B

    while (A_columns!=B_rows)
    {
        printf ("\nError!! columns of A matrix not equal to rows of B matrix");

        printf ("\n\nEnter rows & columns for A matrix: ");
        scanf ("%d %d", &A_rows, &A_columns);

        printf ("\nEnter rows & columns for B matrix: ");
        scanf ("%d %d", &B_rows, &B_columns);

    }


    // input elements for A matrix

    printf ("\nEnter elements for A matrix:\n");
    for (i=0;i<A_rows;i++)
    {
        for (j=0;j<A_columns;j++)
        {
            printf ("A [%d][%d] = ", i,j);
            scanf ("%d", & A [i][j]);
        }

    }


    // input elements for B matrix

    printf ("\nEnter elements for B matrix:\n");
    for (i=0;i<B_rows;i++)
    {
        for (j=0;j<B_columns;j++)
        {
            printf ("B [%d][%d] = ", i,j);
            scanf ("%d", & B [i][j]);
        }
    }

    // printing A matrix

     printf ("\nA matrix:\n");
     for (i=0;i<A_rows;i++)
    {
        for (j=0;j<A_columns;j++)
        {
            printf (" %d\t ", A [i][j]);
        }
             printf ("\n");
    }


    //printing B matrix

    printf ("\nB matrix:\n");
    for (i=0;i<B_rows;i++)
    {
        for (j=0;j<B_columns;j++)
        {
            printf (" %d\t ", B [i][j]);
        }
            printf ("\n");
    }

      //multiplication of A & B matrix

      for (i=0;i<A_rows;i++)
            for (j=0;j<B_columns;j++)
        {
            Product [i][j]=0;
            for (k=0;k<A_columns;k++)
            {
                Product [i][j]=Product [i][j]+A[i][k]*B[k][j];
            }
        }


        //printing product matrix


        printf ("\nMultiplication of product matrix:\n");

        for (i=0;i<A_rows;i++)
        {
            for (j=0;j<B_columns;j++)
            {
                printf (" %d\t ",Product [i][j]);
            }
            printf ("\n");
        }

         return 0;
}
