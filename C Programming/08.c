#include<stdio.h>
int main()
{
    int i;
    float marks[5], sum = 0.0, percentage ;

    printf("\n please enter the 5 sub marks ");

    for (i = 0; i < 5; i++)
    {
        printf("\n enter the marks for sub %d :", i + 1);
        scanf(" %f", &marks[i]);
        sum += marks[i];
    }

    percentage  = (sum / 500) * 100 ;

    printf("\n tolal marks : %.2f" ,sum);
    printf("\n percentage : %.2f", percentage);

    return 0;
}