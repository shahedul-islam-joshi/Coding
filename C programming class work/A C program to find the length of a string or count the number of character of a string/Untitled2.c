#include<stdio.h>
int main ()
{
    char name [50];
    int count = 0;
    int i = 0;



    printf ("Enter your name: ");
    gets (name);
    while (name [i]!='\0')
    {
        count ++;
        i++;
    }



    printf ("The length of string is : %d ",count);

}
