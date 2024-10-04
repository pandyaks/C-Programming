
// Write a program to make addition, Subtraction, Multiplication and Division of Two Numbers.
#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2;
    char choice ;


     printf("\n '+'  to addition");
     printf("\n '-'  to subtrsction");
     printf("\n '*'  to muliplication");
     printf("\n '/'  to dividion");
     printf("\nenter the your choice = ");
     scanf("%c",&choice);

     switch (choice)
     {
        case '+':
        printf("\n enter the value of num1 = ");
        scanf("%d",&num1);
        printf("\n enter the value of num2 = ");
       scanf("%d",&num2);
        printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
        break;

    		case '-' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
		break;



     }



    return 0;
}