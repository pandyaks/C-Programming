// Write a program of structure employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
struct employee
{
	int age;
	long long int pho;
	char name[100];
	char add[100];
};
void main()
{
	struct employee e;
	e.age=35;
	e.pho=8128884549;
	strcpy(e.name,"priyam");
	strcpy(e.add,"119,Nirmal park society ,s.p ring road ,odhav ,ahemdabad");
	
	printf("\nThis is the name of employee = %s",e.name);
	printf("\nTHis is the age of employee = %d",e.age);
	printf("\nThis is the phone number of employee =%lld",e.pho);
	printf("\nTHis is the address of employee = %s",e.add);
}
