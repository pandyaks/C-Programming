#include<stdio.h>
int main()
{
    int row,spc,i,j,k ;
    printf("\n enter the value of row number ");
    scanf("%d",&row);

    spc = row - 1;

    for(i=1;i<=row;i++)
    {
        for (j=spc;j>=1;j--)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        spc--;
    }
}