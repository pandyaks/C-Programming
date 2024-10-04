// Write a program to find the Max number from the given three number using Nested If
#include<stdio.h>
int main()
{
    int a ,b, c;
    char ch1,ch2,ch3;
    printf("\n enter the  'a' number = ");
    scanf(" %d, %c",&a);
     printf("\n enter the 'b' number = ");
    scanf(" %d, %c",&b);
     printf("\n enter the 'c' number = ");
    scanf(" %d, %c",&c);
    int max;
    if(a>=b)
    {
        if(a>=c)
        {
            max = a ;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b>=c)
        {
            max = b;

        }
        else
        {
            max = c;
        }
    }
        printf("\nThe maximum number is: %d", max);

    return 0 ;
}