// Write a Program to check the given number is Positive, Negative.
#include<stdio.h>
int main()
{
    int num ;
    printf("\n enter the value of num = ");
    scanf("%d",&num);
    if (num>0)
    {
        printf(" it is the positive number%d",num);
    }
    else if (num<0)
    {
         printf(" \n it is the nigative%d",num);
    }

    else
    {
       printf("\n is the neutral number%d",num);
    }

    return 0;

}
