#include <stdio.h>

int main() 
{
    int i = 100;
    printf("\nNumbers from 100 to 81 = ");
    do 
    {
        printf("%d ", i);
        i--;
    } while (i >= 81);
    printf("\n");
    return 0;
}
