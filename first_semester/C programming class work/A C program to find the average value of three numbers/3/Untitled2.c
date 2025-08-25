#include<stdio.h>
int main ()
{
    int x,y,z;
    float avg;
    printf ("Enter three numbers:");
    scanf ("%d%d%d",&x,&y,&z);
    avg=(float)(x+y+z)/3;
    printf ("x=%d, y=%d, z=%d\n",x,y,z);
    printf ("Average value=%f",avg);
    return 0;
}
