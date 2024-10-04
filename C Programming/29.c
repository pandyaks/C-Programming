#include <stdio.h>

int main()
{
    int row, col, j, i ;

   
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix1[row][col], matrix2[row][col], sum[row][col];

   
    printf("\nEnter the elements of the first matrix =");
    for (int i = 0; i < row; i++)
     {
        for (j = 0; j < col; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("\nEnter the elements of the second matrix = ");
    for (i = 0; i < row; i++) 
    {
        for ( j = 0; j < col; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

 
    for ( i = 0; i < row; i++) 
    {
        for (j = 0; j < col; j++) 
        {
            sum[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The  matrix after addition is = ");
    for (i = 0; i < row; i++)
     {
        for ( j = 0; j < col; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
