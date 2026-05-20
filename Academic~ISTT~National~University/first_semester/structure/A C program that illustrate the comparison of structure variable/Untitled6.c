#include<stdio.h>
int main ()
{
    struct class
    {
        int number;
        char name ;
        float marks;
    };


    int x;

    struct class st1 = {75,"Joshi",82.5};

    struct class st2 = {82, "SHAHEDUL",89};

    struct class st3;

    st3 = st2;

    x = ((st3.number == st2.number) && st3.marks == st2.marks ) ? 1:0;


    if (x == 1)
    {
        printf ("Student 2 & student 3 are same\n");

        printf ("%d\n%s\n%f",st3.number,st3.marks);
    }
    return 0;
}
