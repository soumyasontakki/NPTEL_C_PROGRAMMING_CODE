// make a border lines to the address

#include<stdio.h>

int add(int a ,int b);
int sub(int a, int b);

void printWithBorder(const char * text);

int main()
{
	int num1 = 20, num2 = 10;
	int sum, difference;
	
	sum = add(num1, num2);
	difference = sub(num1, num2);
	
	printWithBorder("First number :");
	printf("%d\n", num1);
	printWithBorder("second number :");
	printf("%d\n", num2);
	printWithBorder("sum :");
	printf("%d\n",sum);
	printWithBorder("difference :");
	printf("%d\n",difference);
	
	return 0;

}

int add (int a, int b)
{
	return a + b;
	
}

int sub (int a, int b)
{
	return a - b;
	
}
void printWithBorder (const char* text)
{
	printf("********************************\n");
	printf("%s\n",text);
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}