#include<stdio.h>
int main()
{
    int row ,i,j,k,spc ;
    printf("\n enter the count of it = ");
    scanf("%d",&row);
    spc = row - 1;
    for (i=1;i<=row;i++)
    {
        for (j=spc;j>=1;j++)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i=row;i>=1;i--)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}