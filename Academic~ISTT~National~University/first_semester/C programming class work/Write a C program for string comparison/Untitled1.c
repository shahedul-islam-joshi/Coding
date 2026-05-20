#include<stdio.h>
int main ()
{

        // Declare character arrays to store two strings, each with a maximum of 20 characters
    char st1 [20],st2[20];



        // Initialize a variable 'i' to use as an index while iterating through the strings
    int i=0;
    printf ("Enter first string: ");
    gets (st1);
    printf ("Enter second string: ");
    gets (st2);
    while (st1 [i] == st2[i]&&st1[i]!='\0'&&st2[i]!='\0')
    i++;

        if (st1[i]=='\0'&st2[i]=='\0')
        {
            printf ("string are equal\n");
        }


    else
        {
            printf ("string are not equal\n");
        }
        return 0;
}
