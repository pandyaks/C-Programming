#include <stdio.h>
#define MAX 10
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) 
{
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() 
{
    int rowsA, colsA, rowsB, colsB;
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowsA, &colsA);
    inputMatrix(a, rowsA, colsA);
    
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowsB, &colsB);
    inputMatrix(b, rowsB, colsB);

    if (rowsA == rowsB && colsA == colsB) 
    {
        addMatrices(a, b, result, rowsA, colsA);
        printf("\nAddition of matrices:\n");
        displayMatrix(result, rowsA, colsA);
        
        subtractMatrices(a, b, result, rowsA, colsA);
        printf("\nSubtraction of matrices:\n");
        displayMatrix(result, rowsA, colsA);
    } else 
    {
        printf("\ntheir dimensions do not match");
    }

    if (colsA == rowsB) 
    {
        multiplyMatrices(a, b, result, rowsA, colsA, colsB);
        printf("\nMultiplication of matrices ");
        displayMatrix(result, rowsA, colsB);
    } else 
    {
        printf("\n invalue input");
    }

    return 0;
}
