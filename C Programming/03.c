
// 3. Write a program to make a square and cube of number.
#include<stdio.h>
int main()
{
    int num1,num2, choice;
    printf("\n1.Square");
	printf("\n2.Cube");
	
    printf("\n enter your choice = ");
    scanf("%d",&choice);

    switch (choice)
   {

		case 1 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nThe square of %d is %d",num1,num1*num1);
		break;
		case 2 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nThe cube of %d is %d",num1,num1*num1*num1);
		break;
		default : printf("\nInvalid input!");
    }

    return 0;
}