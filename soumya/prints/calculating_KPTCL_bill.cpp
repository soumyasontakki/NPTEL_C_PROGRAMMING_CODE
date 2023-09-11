//calculating the KPTCL bill

#include<stdio.h>

int main()
{
	int units;
	float bill;
	
	printf("enter the number unit: \n");
	scanf("%d",&units);
	
	if (units<=100)
	{
		bill=0+units*1.0;
	}
	else if(units<=250)
	{
		bill=100+(units-100)*1.5;
	}
	else if(units<=500)
	{
		bill=100+150+(units-250)*2.0;
	}
	else
	{
		bill=100+150+500+(units-750)*3.5;
	}
	
	printf("calculte the bill %d \n",bill);
	
	return 0;
}