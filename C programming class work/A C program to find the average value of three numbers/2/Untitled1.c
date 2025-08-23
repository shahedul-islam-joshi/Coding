#include<stdio.h>
int main ()
{
    int x,y,z;
    float avg;
    x=7, y=11, z=13;
    avg=(float)(x+y+z)/3;
    printf ("x=%d, y=%d, z=%d\n",x,y,z);
    printf ("Average value =%.99f",avg);
    return 0;
}
