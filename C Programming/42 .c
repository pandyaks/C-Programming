//WAP to show difference between Structure and Union.
#include<stdio.h>
struct kartik
{
    int roll;
    char name[100];
};

       //AND THIS IS UNION =
union student
{
 int roll;
 char name[100];
};

int main()
{
    struct kartik p;
    printf("\nEnter your name = ");
    gets(p.name);
    printf("\nEnter your roll number =");
    scanf("%d",&p.roll);
    printf("\n");
    printf("\nThis is your name = %s",p.name);
    printf("\nThis is your roll number = %d",p.roll);
    printf("\n");

    union student s;
    s.roll =66;
    printf("\nThis is your roll number = %d",s.roll);
    printf("\nThis is your name = %c",s.name);
}
