#include <stdio.h>
int main ()
{
    int y1,y2,year,m1,m2,month,month2,d1,d2,day;
    printf ("\nInput today date(yyyy/mm/dd): ");
    scanf ("%d%d%d",&y1,&m1,&d1);
    printf ("\nInput birth date(yyyy/mm/dd): ");
    scanf ("%d%d%d",&y2,&m2,&d2);
    if (d1<d2)
    {
        day=(30+d1)-d2;
        month2=(m1+12)-(m2+1);
        month=month2%12;
        year =(y1-(y2+1))+(month2/12);
        printf ("\n\n\nYour age is %d years %d months %d days",year,month,day);

    }
    else
    {
        day=(d1-d2)%30;
        month=(m1-(m2+((d1-d2)/30)))%12;
        year=(y1-(y2+((m1-(m2+((d1-d2)/30)))/12)));
        printf ("\n\n\nYour age is %d years %d months %d days",year,month,day);
    }


}
