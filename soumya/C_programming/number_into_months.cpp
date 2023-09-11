//convert a given number of days into month and days

#include<stdio.h>

int main()
{
	int months,days;
	
	printf("enter days \n");
	scanf("%d", &days);
	
	months = days /30 ;
	days = days % 30 ;
	printf("months = %d days =%d",months ,days);
	
	return 0;
	
}