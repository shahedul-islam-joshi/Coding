#include <stdio.h>
int main ()
{
    //array declaration for matrix A,B and product matrix
    int A[10][10],B[10][10],summation[10][10],subtraction[10][10];
    //variable to store the dimension of matrix
    int a_rows,a_columns,b_rows,b_columns;
    //loop variable
    int i,j,k;


    //get matrix dimension from user

    //input rows  for matrix A & B
    printf ("Enter rows  for A matrix: ");
    scanf ("%d",&a_rows);
    printf ("\nEnter rows & for B matrix: ");
    scanf ("%d",&b_rows);
//validate the rows dimension for matrix A & B
while (a_rows!=b_rows)
    {
        printf ("\nError!! Rows of matrix A & B must equal");
        printf ("\nEnter rows & for A matrix: ");
        scanf ("%d",&a_rows);
        printf ("\nEnter rows & for B matrix: ");
        scanf ("%d",&b_rows);
    }
    //input  columns for matrix A & B
    printf ("\nEnter columns for A matrix: ");
    scanf ("%d",&a_columns);
    printf ("\nEnter columns for B matrix: ");
    scanf ("%d",&b_columns);


    //validate the columns dimension for matrix A & B


    while (a_columns!=b_columns)
    {
        printf ("\nError!! Columns of matrix A & B must equal");
        printf ("\nEnter columns for A matrix: ");
        scanf ("%d",&a_columns);
        printf ("\nEnter columns for B matrix: ");
        scanf ("%d",&b_columns);
    }


    //input elements for A matrix
    printf ("\nEnter elements for A matrix:\n");
    for (i=0;i<a_rows;i++)
    {
        for (j=0;j<a_columns;j++)
        {
            printf ("A[%d][%d]= ", i,j);
            scanf ("%d",&A[i][j]);

        }
    }
    //input elements for B matrix
    printf ("\nEnter elements for B matrix:\n");
    for (i=0;i<b_rows;i++)
    {
        for (j=0;j<b_columns;j++)
        {
            printf ("B[%d][%d]= ", i,j);
            scanf ("%d",&B[i][j]);

        }
    }

    //printing A matrix

    printf ("\nA matrix:\n");
    for (i=0;i<a_rows;i++)
    {
        for (j=0;j<a_columns;j++)
        {
            printf (" %d\t ",A[i][j]);
        }
        printf ("\n");
    }
    //printing B matrix

    printf ("\nB matrix:\n");
    for (i=0;i<b_rows;i++)
    {
        for (j=0;j<b_columns;j++)
        {
            printf (" %d\t ",B[i][j]);
        }
        printf ("\n");
    }

    //summation & subtraction of 2 matrix

    for (i=0;i<a_rows;i++)
        for (j=0;j<b_columns;j++)
    {
        summation[i][j]=A[i][j]+B[i][j];
        subtraction[i][j]=A[i][j]-B[i][j];
    }


    //printing summation
    printf ("\nSummation of A & B matrix:\n");
     for (i=0;i<a_rows;i++)
     {
         for (j=0;j<b_columns;j++)
         {
            printf ("%d\t",summation[i][j]);
         }
         printf ("\n");
     }


    //printing subtraction
    printf ("\nSubtraction of A & B matrix:\n");
     for (i=0;i<a_rows;i++)
     {
         for (j=0;j<b_columns;j++)
         {
            printf ("%d\t",subtraction[i][j]);
         }
         printf ("\n");
     }

}

