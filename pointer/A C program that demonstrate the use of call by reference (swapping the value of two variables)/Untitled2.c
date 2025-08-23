#include<stdio.h>

void swap (int *, int *);    //prototype declaration

int main ()

{
    int x,y;

    printf ("Enter the value of x & y:    ");
    scanf ("%d %d",&x,&y);


    swap (&x,&y);    //call by reference


    printf ("The swaped value of x & y is:  %d & %d",x,y);

    return 0;
}


void swap (int *x, int*y)

{
    int t;

    t = *x;

    *x = *y;

    *y = t;
}
