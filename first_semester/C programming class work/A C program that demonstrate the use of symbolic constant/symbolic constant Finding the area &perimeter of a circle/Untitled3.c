#include <stdio.h>
#define PI 3.1416
int main ()
{
    int r;
    float area,perimeter;
    printf ("Enter the value of radius:");
    scanf ("%d",&r);
    area=PI*r*r;
    perimeter=2*PI*r;
    printf ("The area is %f\n",area);
    printf ("The perimeter is %f\n",perimeter);
    return 0;
}

