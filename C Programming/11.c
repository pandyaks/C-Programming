// Write a Program to check the given year is leap year or not.
#include<stdio.h>
int main ()
{
    int year ;
    printf("\n enter the year : = ");
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 ))
    {
        printf("%d is the leap year",year);
    }
    else
    {
        printf("%d is the not leap year",year );
    }
    return 0;
}