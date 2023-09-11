//roots of qudratic equation

#include<stdio.h>
#include<math.h>
 int main()
{
	float a,b,c,discrimination;
	float root_1,root_2;
	
	printf("Enter the a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	
	discrimination = b * b - 4 * a * c;
	
	if(discrimination<0)
	{
		printf("Roots are imaginari lines \n");
	}
	else
	{
		root_1=(-b + sqrt(discrimination))/(2.0*a);
		root_2=(-b - sqrt(discrimination))/(2.0*a);
		
		printf("roots of qudratic equation %fand%f",root_1,root_2);
	
	}

}