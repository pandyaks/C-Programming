#include <stdio.h>
int stringLength(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    
    return length;
}
int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);
    printf("\nThe length of the string is: %d", length);

    return 0;
}
