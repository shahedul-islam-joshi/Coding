#include <stdio.h>
#include<math.h>

int main ()
{
    int a,b,c;
    double d, root1, root2, real_part, imaginary_part;
    printf ("Enter the values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf ("The two roots are: %.2lf,%.2lf\n",root1,root2);


    }
    else if (d==0)
    {
        root1=root2=-b/(2*a);
        printf ("The two roots are equal and value is %.2lf\n",root1);
    }
    else
    {
        real_part=-b/(2*a);
        imaginary_part=sqrt(-d)/(2*a);
        printf ("root1=%.2lf+%.2lfi\n",real_part, imaginary_part);
        printf ("root2=%.2lf-%.2lfi\n", real_part, imaginary_part);

    }
    return 0;
}
