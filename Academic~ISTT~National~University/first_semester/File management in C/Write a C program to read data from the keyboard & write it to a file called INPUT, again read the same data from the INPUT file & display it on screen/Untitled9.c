#include<stdio.h>
int main ()
{
    FILE *f1;
    char c;


    printf ("Data Input:\n\n");
    f1 = fopen ("Input.txt","w");
    while ((c=getchar())!='\n')
    {
        putc (c,f1);
    }

    fclose (f1);

    printf ("\n\nData Output:  ");
    f1= fopen ("Input.txt","r");
    while ((c=getc(f1))!=EOF)
    {
        printf ("%c",c);
    }

    fclose (f1);
    return 0;
}
