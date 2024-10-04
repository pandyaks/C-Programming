#include <stdio.h>
int main() 
{
    int a[100],i,sum = 0;float average; 

   
    printf("\nEnter 10 integers =");
    for (int i = 0; i < 10; i++) 
    {  printf("\n enter the count of =");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 100; i++) 
    {
        sum += a[i];
    }

    average = sum / 10.0; 

    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}
