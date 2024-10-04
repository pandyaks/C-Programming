#include <stdio.h>
int main() 
{
    int row, col;

    printf("Enter the number of row = ");
    scanf("%d", &row);
    printf("Enter the number of columns = ");
    scanf("%d", &col);

    int matrix[row][col]; 
   
    printf("\nEnter the elements of the matrix =");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

  
    printf("\nThe matrix is =");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
