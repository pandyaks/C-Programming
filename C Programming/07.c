#include<stdio.h>
int main()
{
    float  celsius , fahrenheint ;
     printf("\n entervthe value of clesius = ");
     scanf(" %f",&celsius);

     fahrenheint = (celsius * 9/5) + 32;

     printf("\n Temperature in Fahrenheit: %.2f",fahrenheint );
    return 0;
}