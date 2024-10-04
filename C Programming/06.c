// 4. Write a program to find the Area of Circle

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;

    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
