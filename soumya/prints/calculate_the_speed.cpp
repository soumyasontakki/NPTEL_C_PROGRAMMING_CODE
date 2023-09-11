//distance travelled by the car

#include<stdio.h>

int main()
{
	double distance, time,speed;
	
	printf("enter the distance travelled (inkilometers)");
	scanf("%f",&distance);
	
	printf("enter the time taken (in hours)");
	scanf("%f",&time);
	
	//calculate the speed =distance/time
    speed=distance/time;
	
	printf("the speed of the car is %f km/h",speed);
	
	return 0;
}