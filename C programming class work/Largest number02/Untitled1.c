#include <stdio.h>
int main ()
{
    int a=10, b=5, c=3;
    (a>b)?(a>c)?printf("a is the largest"):printf("c is the largest"):(b>c)?printf("b is the largest"):printf("c is the largest");
    return 0;

}
