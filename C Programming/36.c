#include <stdio.h>
void sortAscending(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] < arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int size1, size2;
    printf("Enter size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int choice;
    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        sortAscending(arr1, size1);
        printf("First array sorted in ascending order:\n");
    } else if (choice == 2) 
    {
        sortDescending(arr1, size1);
        printf("First array sorted in descending order:\n");
    } else
    {
        printf("Invalid choice! No sorting applied to the first array.\n");
    }
    
    for (int i = 0; i < size1; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    if (choice == 1)
    {
        sortAscending(arr2, size2);
        printf("Second array sorted in ascending order:\n");
    } else if (choice == 2) 
    {
        sortDescending(arr2, size2);
        printf("Second array sorted in descending order:\n");
    } else 
    {
        printf("Invalid choice! No sorting applied to the second array.\n");
    }
    
    for (int i = 0; i < size2; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

