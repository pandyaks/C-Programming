#include<stdio.h>
int main()
{
    int row,k,i,j;
    printf("\n enter the count of row ");
    scanf("%d",&row);
    for (i=0;i<row;i++)
    {
        for(j=row;j>i;j--)
        {
            printf("* ");
        }
        for(j=0;j< 2 * i;j++)
        {
            printf(" ");
        }
        for(j=row;j>1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}