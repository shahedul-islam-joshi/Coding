#include<stdio.h>

main ()

{

int m;

for ( m = 1; m < 5 ;m++)

printf ( "%d\n",  (m%2)? m : m*2);
}

