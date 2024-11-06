//	WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
void main()
{
    char str[1000],str2[1000];
    int i,count=0;
    printf("\nENTER ANY STRING = ");
    gets(str);
    printf("\nTHIS IS THE ORIGINAL STRING =%s",str);
    printf("\n");
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;str[i]!='\0';i++)
    {
        str2[count-1]=str[i];
        count--;
    }
    printf("\nReversed string = ");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str2[i]);
    }
    printf("\n");
     if(str[i]==str2[i])

        {
        printf("\nThis string is not palindrome");
        }
        else if(str[i]!=str2[i])
        {
          printf("\nThe string is palindrome");
        }
}
