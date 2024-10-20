// Write a program to find out the max number from given array using function
#include <stdio.h>
int findMax(int arr[], int size) ,i ;
int main() 
{
    int size;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("\nEnter %d elements:", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];  

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];  
        }
    }
    printf("\nThe  number in the array is: %d", max);
   
}
