//calculating the amount of each person

#include<stdio.h>

main()
{
	float distance,milege,petrol_rate;
	float total,exp,prob_head;
	
	printf("enter distance :milege,petrol rate");
	scanf("%f%f%f",&distance,&milege,&petrol_rate);
	
	total=(distance*2)/milege;
	exp=total*petrol_rate;
	prob_head=exp/4;
	
	printf("amount of each person %f",prob_head);
	
	return 0;
	
	
	}