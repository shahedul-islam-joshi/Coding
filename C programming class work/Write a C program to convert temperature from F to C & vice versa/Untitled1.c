#include <stdio.h>
int main ()
{
    float f,c;
    printf ("Enter temparature in F:");
    scanf ("%f",&f);
    c=(5*f-160)/9;
    f=(1.8*c+32);
    printf ("Temparature=%f F and Temparature=%f c",f,c);
    return 0;
}
