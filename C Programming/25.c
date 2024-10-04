#include<stdio.h>
int main()
{
    int a[100],i,j;
    for(i=0;i<5;i++)
    {
        printf("\n enter the count in this = ");
        scanf("%d",&a[i]);
    }
    printf("\n array a = ");
    for(i=0;i<5;i++)
    {
         printf("%d ",a[i]);
    }
    return 0;
}