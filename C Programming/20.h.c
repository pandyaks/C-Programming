#include <stdio.h>
int main() 
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Numbers in reverse order:\n");
    for (int i = n; i >= 1; i--) 
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
