#include <stdio.h>
int findMax(int arr[], int size) 
{
    if (size == 0) 
    {
        return -1; 
    }
    int maxNum = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > maxNum) 
        {
            maxNum = arr[i];
        }
    }
    return maxNum;
}
int main() 
{
    int numbers[100] = {14,78,90,56,4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maxNumber = findMax(numbers, size);
    if (maxNumber != -1) 
    {
        printf("The maximum number in the array is: %d\n", maxNumber);
    } else 
    {
        printf("The array is empty.\n");
    }

    return 0;
}
