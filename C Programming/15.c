// Write a program to find the Max number from the given three number using Nested If
#include<stdio.h>
int main()
{
    int  a,b,c;
    char ch1,ch2,ch3;

    printf("Enter 'a' numbers: ");
    scanf("%d,  %c ",&a);
     printf("Enter 'b' numbers: ");
    scanf("%d,  %c ",&b);
    printf("Enter 'c' numbers: ");
    scanf("%d,  %c ",&c);

    int max;

    if (a >= b) {
        if (a >= c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b >= c) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("The maximum number is: %d", max);
    return 0 ;
}
