// calculating add sub mul div

#include<stdio.h>

int main()
{
	int choice;
	float num1,num2,result;
	
	printf("select opretion \n");
	printf("1.Addition \n");
	printf("2.Subtraction \n");
	printf("3.Multiplication \n");
	printf("4.Divition \n");
	printf("enter your choice(1/2/3/4) :\n");
	scanf("%d",&choice);
	
	printf("enter two number :\n");
	scanf("%f%f",&num1,&num2);
	
	switch(choice){
		case 1:
		   result = num1 + num2;
		   printf("sum %f",result);
		   break;
		case 2:
		   result = num1 - num2;
		   printf("difference %f",result);
		   break;
		case 3:
		   result = num1 *num2;
		   printf("product %f",result);
		   break;
		case 4:
		if (num2 != 0)
		{
			result = num1 /num2;
			printf("quotient %f",result);
		}
		else 
		{
			printf("the number is not divisible by zero");
		}
		break;
		default :
			
			printf("Invaild choice");
		
	}
	
	return 0;
}