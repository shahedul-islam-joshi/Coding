#include <stdio.h>
int main ()
{
    char st1[50],st2[50];
    int i=0;
    printf ("Enter a string: ");
    gets (st1);

    while (st1[i]!='\0')
    {
        st2[i]=st1[i];
        i++;

    }



    {
st2[i]='\0';
        printf ("The copied string is : %s",st2);
    }
    return 0;
}
