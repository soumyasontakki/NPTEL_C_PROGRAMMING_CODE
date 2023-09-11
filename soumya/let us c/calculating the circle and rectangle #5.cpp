/*calculating the area and circumference of the circle
  and area and perimeter of the rectangle*/
  
#include<stdio.h>

int main()
{
	int l,b,r,area_circle,area_rectangle,perimeter, circumference;
	int rectangle,circle;
	
	printf("Enter the lenght and breadth of the rectangle:\n");
	scanf("%d%d",&l,&b);
	
	rectangle = area_rectangle = l * b;
	        perimeter = 2*(l + b);
	            
	printf("Enter the radius of the circle:\n");
	scanf("%d",&r);
	
	circle = area_circle = 3.14 * r *r;
	       circumference = 2* 3.14 *r;
		   
    printf("The area_rectangle and perimeter of the rectangle:%d %d\n",area_rectangle ,perimeter);
	printf("The area_circle and circumference of the circle:%d %d\n", area_circle,circumference);
	
	return 0;            
  }  