#include<stdio.h>
int main()
{
    int a[100],i,odd=0,even=0;
    printf("\n enter the 10 element of it = ");
    for (i=0;i<10;i++)
    {
        printf("\n enter the count of =");
        scanf("%d",&a[i]);
    }
      for (i = 0; i < 10; i++) 
      {
        if (a[i] % 2 == 0) 
        {
            even++; 
        } 
        else
        {
            odd++;  
        }

    }
    printf("\n tolal even  count  number is %d", even);
    printf("\n tolal  odd count number is  %d",odd);

    return 0;

}