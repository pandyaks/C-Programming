#include <stdio.h>
int main()
{
    int matrix[100][100];
    int max, i, j, ROWS,COLS;

    printf("\n enter the ROWS  = ");
    scanf("%d",& ROWS);
     printf("\n enter the COLS  = ");
    scanf("%d",& COLS);

    printf("\nEnter the elements of the matrix = ");
    for (i = 0; i < ROWS; i++) 
    {
        for (j = 0; j < COLS; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

 max = matrix[0][0];

    for (i = 0; i < ROWS; i++)
     {
        for (j = 0; j < COLS; j++) 
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    printf("\nThe maximum element in the matrix is: %d", max);

    return 0;
}
