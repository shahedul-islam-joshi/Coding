#include<stdio.h>
#include<string.h>
int main ()
{
    char st [50],rev_st[50];
    int i=0,j=0,count=0,true=0,false=0;

        //input string
    printf ("Enter a string: ");
    scanf ("%s",st);

          //calculate the length of the string
    for (i=0;st[i]!='\0';i++)
    {
        count++;
    }

    printf ("The string length is: %d",count);


               //reverse the string
    for (i=count-1;i>=0;i--)
    {
        rev_st[j]=st[i];
        j++;
    }
    rev_st[j]='\0';

    printf ("\nReverse string is: %s",rev_st);


                 //compare original & reverse string

    for (i=0; i<=count; i++)
    {
        if (rev_st[i]!=st[i])
        {
            false=1;
        }

    }
        if (false)
            printf ("\nString is not palindrome");
        else
            printf ("\nString is palindrome");
}


