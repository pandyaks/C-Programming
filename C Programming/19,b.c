#include<stdio.h>
int main()
{
    int a[5],i;
    printf("\nenter 5 the elemernt = ");
    for(i=0;i<5;i++)
    {
        printf("\nelement %d =",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n you who enter the :");
    for (i=0;i<5;i++)
    {
          printf("\n\t element %d =  %d\n", i + 1, a[i]);
    }
    return 0;
}
