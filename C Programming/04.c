// 6. Write a program to find the simple Interest.

#include <stdio.h>
int main()
 {
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);

    float simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest for principal %.2f, rate %.2f%%, and time %.2f years is %.2f\n", principal, rate, time, simpleInterest);

    return 0;
}
