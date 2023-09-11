//add and sub two numbers

#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main()
{
	int num1=20,num2=10;
	int sum, difference;
	
	sum=add(num1,num2);
	difference=sub(num1,num2);
	
	printf("first number :%d \n",num1);
	printf("second number :%d \n",num2);
	printf("sum :%d \n",sum);
	printf("difference :%d \n",difference);
	
	return 0;
	
}

int add (int a, int b){
	return a+b;
}

int sub (int a, int b){
	return a-b;
}
