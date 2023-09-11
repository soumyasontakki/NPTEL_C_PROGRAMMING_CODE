//print the grade

#include<stdio.h>

int main()
{
	int CIEmarks,SEEmarks,total;
	char grade;
	
	printf("enter CIEmarks and SEEmarks: \n");
	scanf("%d%d",&CIEmarks,&SEEmarks);
	
	total=CIEmarks + SEEmarks;
	
	printf("printing the value of %d \n",total);
	
	if (total>90)
	{
		printf("the grade A+");
	}
	else if(total>=80)
	{
		printf("the grade A");
	}
	else if(total>=70)
	{
		printf("the grade B+");
	}
	else if(total>=60)
	{
		printf("the grade B");
	}
	else if(total>=50)
	{
		printf("the grade C+");
	}
	else if(total>=40)
	{
		printf("the grade C");
	}
	else 
	{
		printf("FAIL");
	}
	
	return 0;
}