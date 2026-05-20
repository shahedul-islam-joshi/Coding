#include<stdio.h>
int main ()
{
    int num1, num2, num3, sum;
    float avg;
    printf ("Enter three marks:");
    scanf ("%d%d%d",&num1, &num2, &num3);
    sum=num1+num2+num3;
    avg=sum/3;
    if (avg>=80&&avg<=100)
        printf ("GPA=4.00");
    else if (avg>=75&&avg<80)
        printf ("GPA=3.75");
    else if (avg>=70 && avg<75)
        printf ("GPA=3.50");
    else if (avg>=65 && avg<70)
        printf ("GPA=3.25");
    else if (avg>=60 &&avg<65)
        printf ("GPA=3.00");
    else if (avg>=55 && avg<60)
        printf ("GPA=2.75");
    else if (avg>=50 &&avg <55)
        printf ("GPA=2.50");
    else if (avg>=45 &&avg <50)
        printf ("GPA=2.25");
    else if (avg>=40 &&avg <45)
        printf ("GPA=2.00");
    else
        printf ("GPA=0.00");
        return 0;

}
