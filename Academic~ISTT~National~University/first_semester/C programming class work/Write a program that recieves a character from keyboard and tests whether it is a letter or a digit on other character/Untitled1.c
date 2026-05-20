#include<stdio.h>
#include<ctype.h>
int main ()
{
    char character;
    printf ("press any key.....");
    character=getchar();
    if (isalpha(character)>0)
        printf ("This is a alphabetic character");
    else if (isdigit(character)>0)
        printf ("This is a digit");
    else printf ("This is a special character");
    printf ("\nThe ASCII value is %d",character);
    return 0;
}
