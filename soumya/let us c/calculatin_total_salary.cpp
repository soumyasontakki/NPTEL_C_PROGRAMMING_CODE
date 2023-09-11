//calculating total salary

#include<stdio.h>

int main()
{
	float basic_salary,dearness_allowance,house_rent,gross_salary;
	
	printf("enter the basic_salary:\n");
	scanf("%f",&basic_salary);
	
	dearness_allowance=0.40*basic_salary;
	house_rent=0.20*basic_salary;
	
	gross_salary=basic_salary+dearness_allowance+house_rent;
	
	printf("basic=%f, DA = %f, hra = %f",basic_salary,dearness_allowance,house_rent);
	printf("\nGross sal=%f",gross_salary);
	return 0;
}