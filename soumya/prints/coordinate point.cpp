//finiding the coordinate point

#include<stdio.h>

main()
{
	float x,y;
	
	printf("enter the x-coordinate:");
	scanf("%f",&x);
	
	printf("enter the y-coordinate:");
	scanf("%f",&y);
	
	if(x>0,y>0)
	{
		printf("the point is quadrant %f%f 1 \n",x,y);
	}
	else if(x<0,y>0)
	{
		printf("the point is quadrant %f%f 2 \n",x,y);
	}
	else if(x<0,y<0)
	{
		printf("the point is quadrant %f%f 3 \n",x,y);
    }
    else if(x>0,y<0)
    {
    	printf("the point is quarant %f%f 4 \n",x,y);
	}
	else if(x==0,y!=0)
	{
		printf("the point is %f%f positive y-axis \n",x,y);
	}
	else if(x!=0,y==0)
	{
		printf("the point is %f%f positive x-axis \n",x,y);
	}
	else if(x==0,y==0)
	{
		printf("the point of quarant is origin \n",x,y);
	}
	return 0;
}