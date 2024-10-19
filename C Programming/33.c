#include <stdio.h>
int main() 
{
    int choice;
    float num1, num2, result;
    do 
    {
       
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) 
        {
            printf("Exiting the program.\n");
            break;
        }
        printf("Enter one numbers ");
        scanf("%f", &num1);
        printf("\n enter the two number");
        scanf("%f",&num2);
        switch (choice) 
        {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else 
                {
                    printf("\nDivision by zero is not there");
                }
                break;
            default:
                printf("\nInvalid choice!");
        }

        printf("\n");

    } while (choice != 5);

    return 0;
}
