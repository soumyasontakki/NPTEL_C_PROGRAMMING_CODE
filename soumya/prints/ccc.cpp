/*inding the area of circle,rectangle,squre

#include<stdio.h>

float CalculateCircleArea(float radius);
{
	return *3.14*radius*radius;
}
float CalculateRectangleArea(float lenght,float width);
{
	return *lenght*width;
}
float CalculateSquareArea(float side);
{
	return *side*side;
}*/

#include<stdio.h>

int main()
{
	int choice,radius,side,lenght,width,square;
	float circle_area,rectangle_area,square_area;
	
	printf("select the shape \n");
	printf("1 is circle\n");
	printf("2 is rectangle\n");
	printf("3 is square\n");
	printf("enter your choice 1,2,3\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("enter the radius of circle:");
		scanf("%.2f",&radius);
		
		circle_area=3.14*radius*radius;
		printf("area of the circle %f \n",circle_area);
	}
	else if(choice==2)
	{
		printf("enter the lenght and width of the rectangle:");
		scanf("%f",&lenght,&width);
		
		rectangle_area=lenght*width;
		printf("area of the rectangle %f\n",rectangle_area);
	}
	else if(choice==3)
	{
		printf("enter the side of square:");
		scanf("%f",&side);
		
		square_area=side*side;
		printf("area of the square %f \n",square);
		
	}

	else
	{
		printf("wrong choice");
	}
	
	return 0;
}