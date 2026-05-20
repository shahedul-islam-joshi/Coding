#include<stdio.h>
int main ()
{
    int a,b,c,x,y,z;
    int p,q,r;
    printf ("Enter three integer number:\n ");
    scanf("%d %*d %d", &a,&b,&c);
    printf ("%d%d%d\n\n",a,b,c);
    printf ("Enter two 4 digit number\n");
    scanf ("%4d %2d", &x, &y);
    printf ("%d%d\n\n",x,y);
    printf ("Enter two integer number:");
    scanf ("%d%d",&a,&x);
    printf ("%d%d", a,x);
    printf ("Enter a nine digit number\n");
    scanf ("%3d%4d%3d",&p,&q,&r);
    printf ("%d%d%d\n\n",p,q,r);
    printf ("Enter two 3 digit numbers:");
    scanf ("%d%d",&x,&y);
    printf("%d%d",x,y);
    return 0;
}
