#include <stdio.h>
int main ()

{
    int hr1,min1,sec1,hr2,min2,sec2,sec,min,hr;
    printf ("Enter hour, minute & second for time 1: ");
    scanf ("%d%d%d",&hr1,&min1,&sec1);
     printf ("Enter hour, minute & second for time 2: ");
     scanf ("%d%d%d",&hr2,&min2,&sec2);
     sec=(sec1+sec2)%60;
     min=(min1+min2+(sec1+sec2)/60)%60;
     hr=hr1+hr2;
     printf ("Result = %d hour, %d minute %d second ",hr,min,sec);
return 0;

}
