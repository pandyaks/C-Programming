#include<stdio.h>
void main()
{
    int a[100],b[100],i,j,row,col,choice;
    
    printf("\n enter 1.for the a and b array in ascending order  ");
    printf("\n enter 2.for the a and b array in descending order ");
    printf("\n enter 3.for the a array in ascending order and b array in descending order  ");
    printf("\n enter 4.for the a array in descending order and b array in ascending order  ");
    printf("\n");
    printf("\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
         printf("\nEnter the size of an a array = ");
         scanf("%d",&row);
         printf("\nEnter the size of an b array = ");
         scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        printf("\nENTER THE ELEMENTS OF an a array in a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<col;i++)
    {
        printf("\nENTER THE ELEMENTS OF an b array in b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    printf("\nThis is the original a array =");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }

      printf("\nThis is the original b array =");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=i+1;j<row;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }

    }
    for(i=0;i<col;i++)
    {
        for(j=i+1;j<col;j++)
        {
            if(b[i]>b[j])
            {
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }

    }
    printf("\nThe a array in ascending order = ");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe b array in ascending order = ");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
        }
    break;

    case 2:
        {
         printf("\nEnter the size of an a array = ");
         scanf("%d",&row);
         printf("\nEnter the size of an b array = ");
         scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        printf("\nENTER THE ELEMENTS OF an a array in a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<col;i++)
    {
        printf("\nENTER THE ELEMENTS OF an b array in b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    printf("\nThis is the original a array =");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }

      printf("\nThis is the original b array =");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=i+1;j<row;j++)
        {
            if(a[i]<a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }

    }
    for(i=0;i<col;i++)
    {
        for(j=i+1;j<col;j++)
        {
            if(b[i]<b[j])
            {
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }

    }
    printf("\nThe a array in descending order = ");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe b array in descending order = ");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
        }
    break;
    case 3:
        {
             printf("\nEnter the size of an a array = ");
         scanf("%d",&row);
         printf("\nEnter the size of an b array = ");
         scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        printf("\nENTER THE ELEMENTS OF an a array in a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<col;i++)
    {
        printf("\nENTER THE ELEMENTS OF an b array in b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    printf("\nThis is the original a array =");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }

      printf("\nThis is the original b array =");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

    for(i=0;i<row;i++)
    {
        for(j=i+1;j<row;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }

    }
    for(i=0;i<col;i++)
    {
        for(j=i+1;j<col;j++)
        {
            if(b[i]<b[j])
            {
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }
    }
      printf("\nThe a array in ascending order = ");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe b array in descending order = ");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
        }
    break;
    case 4:
        {
         printf("\nEnter the size of an a array = ");
         scanf("%d",&row);
         printf("\nEnter the size of an b array = ");
         scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        printf("\nENTER THE ELEMENTS OF an a array in a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<col;i++)
    {
        printf("\nENTER THE ELEMENTS OF an b array in b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    printf("\nThis is the original a array =");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }

      printf("\nThis is the original b array =");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
        for(i=0;i<row;i++)
    {
        for(j=i+1;j<row;j++)
        {
            if(a[i]<a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=i+1;j<col;j++)
        {
            if(b[i]>b[j])
            {
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }
    }
    printf("\nThe a array in descending order = ");
    for(i=0;i<row;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe b array in ascending order = ");
    for(i=0;i<col;i++)
    {
        printf("%d ",b[i]);
    }
        }
    break;
    default:
        {
            printf("\n invalid number! please enter valid number ");
        }
    }
}

