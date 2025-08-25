#include <stdio.h>
void swapping (int, int);   //prototype declaration
int main ()
{
    int x, y;

    printf ("Enter the value of x & y: ");
    scanf ("%d%d",&x,&y);

    swapping (x,y); //function call

    return 0;
}


void swapping (int x, int y)     //function definition

{
    int temp;
    temp = x;
    x = y;
    y = temp;


    printf ("The value of x & y is: %d %d",x,y);
}
