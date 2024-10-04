// Write a program of to find out the Area of Triangle, Rectangle and Circle using If Condition.(Must Be Menu Driven)
#include <stdio.h>
#include <math.h>

int main() 
{
    int choice;
    float area, base, height, length, width, radius;

    do 
    {
       
        printf("1. Area of Triangle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Circle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) 
        {
            printf("Exiting the program.\n");
            break;
        }

        if (choice == 1) 
        {
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2f\n", area);
        } else if (choice == 2) 
        {
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle: %.2f\n", area);
        } else if (choice == 3) 
        {
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * radius * radius; 
            printf("Area of Circle: %.2f\n", area);
        } else 
        {
            printf("\nInvalid choice");
        }
    } while (choice != 4);

    return 0;
}
