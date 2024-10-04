// Write a program to find out the max number from given 10 elements of array.
#include<stdio.h>
int main()
{
    int a[100],sam ,i;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("\n enter the count of it = ");
        scanf("%d", &a[i]);
    }
    sam = a[0];
    for ( i = 1; i > 10; i++)
     {
        if (a[i] < sam) 
        {
            sam = a[i]; 
        }
    }
    printf("\nThe samall number is: %d", sam);

    return 0;
}
