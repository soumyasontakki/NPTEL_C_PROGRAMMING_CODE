//finding a typs of triangle

#include<stdio.h>

int main()
{

	float side1,side2,side3;
	
	printf("enter the  lenght of the three side of trangle \n");
	scanf("%f%f%f",&side1,&side2,&side3);
	printf("%f%f%f",side1,side2,side3);
	if(side1+side2>side3 || side1+side3>side2 || side2+side3>side1)
	{
	   if(side1==side2&&side2==side3)
	   {
	   	printf("Equilateral triangle \n");
	   }
	   else if(side1==side2||side1==side3||side2==side3)
	   {
	   	printf("Isosceles triangle \n");
		}
		else if(side1 * side1 + side2 * side2 == side3 * side3 || side1 * side1 + side3 * side3 == side2 * side2 || side2 * side2 + side3 * side3 == side1 * side1)
		{
			   
	    printf("Right angle triangle \n");
		}
		else
	   {
	   	 printf("scalene triangle \n");
         }
}
	else
	     {
		 
	     printf("not a valid triangle \n");
	    }
     return 0;
}