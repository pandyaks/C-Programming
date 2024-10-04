#include<stdio.h>
int main()
{
	int size,i,j,choice,k;
	char ch;
	int a[100][100],b[100][100],ans[100][100];
	
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nArray a := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n -.Subtraction");
	printf("\n * .Multiplication");
	printf("\nEnter the choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '-':
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nThe subtraction is := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case '*' :
			for(i=0;i<size;i++)  
			{
				for(j=0;j<size;j++) 
				{
					ans[i][j] = 0;
					for(k=0;k<size;k++) 
					{
						ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
					}
				}
			}
			printf("\nMultiplication is := \n");
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
	}
	
	return 0;
}