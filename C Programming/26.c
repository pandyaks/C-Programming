#include <stdio.h>
int main() 
{
    int n, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position (1 to %d) of the element to find: ", n);
    scanf("%d", &position);

   
    if (position < 1 || position > n) 
    {
        printf("\nInvalid position! Please enter a position between 1 and %d.", n);
    } else 
    {
      
        printf("Element at position %d is: %d\n", position, arr[position - 1]);
    }

    return 0;
}
