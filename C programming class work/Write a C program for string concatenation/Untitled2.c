#include<stdio.h>
int main ()
{
    char f_name[30],m_name[30],l_name[30],name[95];

    int i,j,k;


    printf ("Enter first name: ");
    gets (f_name);


    printf ("Enter middle name: ");
    gets (m_name);


    printf ("Enter last name: ");
    gets (l_name);

    //copy name to name[i]

    for (i=0;f_name[i]!='\0';i++)
    {
                name [i] = f_name [i];

    }
    name [i]= ' ';


   for (j=0;m_name[j]!='\0';j++)
   {
               name [i+j+1] = m_name [j];

   }
    name [i+j+1]= ' ';



    for (k=0;l_name[k]!='\0';k++)
    {
                name [i+j+k+2] = l_name [k];

    }
    name [i+j+k+2]= '\0 ';


    printf ("The full name is %s",name);
}
