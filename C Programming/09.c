// Write a Program to show swap of two No's without using third variable.
#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("\n enter the value of num1 = ");
    scanf("%d",&num1);
    printf("\n enter the value of num2 = ");
    scanf("%d",&num2);

    num1 = num2;
    num2 = num1;

     printf("\n after the swap value is %d",num2);
     printf("\n after the swap vaue is %d",num1);

    return 0;
}