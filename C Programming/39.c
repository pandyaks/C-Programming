#include <stdio.h>
#include <string.h>
void reverseString(char *str) 
{
    int length = strlen(str);
    char temp;
    
    for (int i = 0; i < length / 2; i++) 
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int isPalindrome(const char *str) 
{
    int length = strlen(str);
    
    for (int i = 0; i < length / 2; i++) 
    {
        if (str[i] != str[length - i - 1]) 
        {
            return 0;  
        }
    }
    return 1;
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    char reversed[100];
    strcpy(reversed, str);  
    reverseString(reversed);
    if (isPalindrome(str)) 
    {
        printf("\nThe string  is a palindrome %s", str);
    } else 
    {
        printf("\nThe string is not a palindrome %s", str);
    }

    printf("\nReversed string: %s", reversed);
    
    return 0;
}
