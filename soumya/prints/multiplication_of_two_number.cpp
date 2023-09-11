//MULTIPLICATION FUNCTION

#include<stdio.h>

int mul(int a, int b);

int main()
{
	int a,b,c;
	a=5;
	b=10;
	c=mul(a,b);
	
	printf("mul of %d and %d is %d",a,b,c);
	
	}
	/*     main function ends
	mul function starts*/
	
	int mul(int x, int y){
	int p;
	
		p = x*y;
		return(p);
	}
	