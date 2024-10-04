#include <stdio.h>
int main()
 {
    int n, number, max;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &number);
    max = number; 
    for (int i = 2; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        if (number > max) 
        {
            max = number;
        }
    }

    printf("Maximum number is: %d\n", max);
    return 0;
}
