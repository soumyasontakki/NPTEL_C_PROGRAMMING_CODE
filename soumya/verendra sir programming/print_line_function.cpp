#include<stdio.h>

int main()
{
	void printline();
    printline();
   	printf("I write my first program\n");
   	printline();
}
    void printline()
    {

	int i;
    for(i=1;i<=40;i++)
    	printf("-");
    printf("\n");
}