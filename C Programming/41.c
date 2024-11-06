//o	Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age  
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
	struct employee e1,e2,e3,e4,e5;
	e1.age=35;
	e1.pho=8128884549;
	strcpy(e1.name,"priyam");
	strcpy(e1.add,"119,Nirmal park society ,s.p ring road ,odhav ,ahemdabad");
	
	printf("\nThis is the name of employee = %s",e1.name);
	printf("\nThis is the age of employee = %d",e1.age);
	printf("\nThis is the phone number of employee =%lld",e1.pho);
	printf("\nThis is the address of employee = %s",e1.add);
	printf("\n");
	
	e2.age=48;
	e2.pho=8128884549;
	strcpy(e2.name,"dhrshil");
	strcpy(e2.add,"119,Nirmal park society ,s.p ring road ,odhav ,ahemdabad");
	
	printf("\nThis is the name of employee = %s",e2.name);
	printf("\nTHis is the age of employee = %d",e2.age);
	printf("\nThis is the phone number of employee =%lld",e2.pho);
	printf("\nThis is the address of employee = %s",e2.add);
	printf("\n");
	
	e3.age=25;
	e3.pho=8128884549;
	strcpy(e3.name,"nikhil");
	strcpy(e3.add,"119,Nirmal park society ,s.p ring road ,odhav ,ahemdabad");
	
	printf("\nThis is the name of employee = %s",e3.name);
	printf("\nTHis is the age of employee = %d",e3.age);
	printf("\nThis is the phone number of employee =%lld",e3.pho);
	printf("\nThis is the address of employee = %s",e3.add);
	printf("\n");
	
	e4.age=42;
	e4.pho=8128884549;
	strcpy(e4.name,"shubham");
	strcpy(e4.add,"119,Nirmal park society ,s.p ring road ,odhav ,ahemdabad");
	
	printf("\nThis is the name of employee = %s",e4.name);
	printf("\nTHis is the age of employee = %d",e4.age);
	printf("\nThis is the phone number of employee =%lld",e4.pho);
	printf("\nThis is the address of employee = %s",e4.add);
	printf("\n");
	
	e5.age=55;
	e5.pho=8128884549;
	strcpy(e5.name,"suraj");
	strcpy(e5.add,"119,Nirmal park society ,s.p ring road ,odhav ,ahemdabad");
	
	printf("\nThis is the name of employee = %s",e5.name);
	printf("\nTHis is the age of employee = %d",e5.age);
	printf("\nThis is the phone number of employee =%lld",e5.pho);
	printf("\nThis is the address of employee = %s",e5.add);
	printf("\n");

}
