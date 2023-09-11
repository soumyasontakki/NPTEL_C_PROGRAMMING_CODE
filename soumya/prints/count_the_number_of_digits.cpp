//multiplication table

#include<stdio.h>

int main(){
	
	int number;
	
	printf("enter the number :");
	scanf("%d \n",&number);
	
	int count=1;
	
	while(count<=10){
	int product=number*count;
	printf("%d \n",product);
	count=count+1;
	}
	return 0;
	
	
}