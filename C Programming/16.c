//Write a program user enter the 5 subjects mark. You have to make a total and find the percentage
//percentage > 75 you have to print “Distinction”
//percentage > 60 and percentage <= 75 you have to print “First class” percentage >50 and percentage <= 60 you have to print “Second class” percentage > 35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail” 
#include <stdio.h>
int main() 
{
    float marks[5];
    float total = 0, percentage;


    printf("\nEnter marks for 5 subjects =");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; 
    }

    percentage = (total / 500) * 100;

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 75)
    {
        printf("Grade: Distinction\n");
    } 
    else if
     (percentage > 60 && percentage <= 75)
    {
        printf("Grade: First Class\n");
    } 
    else if (percentage > 50 && percentage <= 60) 
    {
        printf("Grade: Second Class\n");
    } 
    else if (percentage > 35 && percentage <= 50)
    {
        printf("Grade: Pass Class\n");
    } else 
    {
        printf("Grade: Fail\n");
    }

    return 0;
}
