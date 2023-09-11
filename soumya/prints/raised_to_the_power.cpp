//Raised to the power 2^3

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,result;
	
	printf("enter the base number (a) :");
	scanf("%1f",&a);
	
	printf("enter the exponent (b):");
	scanf("%f", &b);
	
	result = pow(a,b);	
	printf("%.21f raised to the power %.21f is %.21f",a,b,result);
	
	return 0;
}