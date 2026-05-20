#include <stdio.h>
int main ()
{
    int r;
    float area,perimeter;
    const float pi=3.1416;
    printf ("Enter the value of radius:");
    scanf ("%d",&r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf ("The area is %f",area);
    printf ("The perimeter is %f",perimeter);
    return 0;
}
