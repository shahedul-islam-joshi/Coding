#include <stdio.h>
#include <string.h>
int main ()
{
    //array declaration
    char st[50],rev_st[50];
    //loop variable
    int i=0,j=0,count=0,true=0;

    //input string
    printf ("Enter a string: ");
    gets(st);


    while (st[i]!='\0')
    {
        count++;
        i++;
    }

    printf ("String length is: %d",count);


    //reverse the string
    while (i>=0)
    {
        i--;
        rev_st[j]=st[i];
        j++;
    }
    rev_st[j]='\0';

    printf("\nReversed string: %s", rev_st);

        //reset the value of i for comparison
    i=0;


    //check palindrome
    while (st[i]!='\0')
    {
        if (st[i]!=rev_st[i])
        {
            true=1;
        }
           i++;
    }
    if (true)
        printf ("\nString is not palindrome");
        else
            printf ("\nString is palindrome");
}
