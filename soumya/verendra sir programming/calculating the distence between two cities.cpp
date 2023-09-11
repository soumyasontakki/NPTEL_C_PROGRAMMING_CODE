//the distence between two citis

#include<stdio.h>

int main()
{
	float Km;
	
	printf("enter lenght of the kiometer\n");
	scanf("%f",&Km);
	
	printf("distence %f Km = %f meter:\n",Km,Km*1000);
	printf("distence %f Km = %f feet:\n",Km,Km*3280.84);
	printf("distence %f Km = %f inches:\n",Km,Km*39370.08);
	printf("distence %f Km = %f centimeter:",Km,Km*1000*100);
	
	return 0;
 
}