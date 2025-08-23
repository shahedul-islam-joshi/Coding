#include <stdio.h>
int main ()
{
    int x,y,z;
    printf ("Enter the height of x,y,z: ");
    scanf ("%d%d%d",&x,&y,&z);
    if (x<y && x<z)
        printf ("x is smallest");
    else if (y<x && y<z)
        printf ("y is smallest");
    else
        printf ("z is smallest");
    return 0;
}
