#include<stdio.h>

int main()
{
	int s;
	void printline();
	int sum(int,int);
	printline();
    s=sum(4,5);
   	printf("sum=%d\n",s);
   	printline();
}
    void printline()
    {

	int i;
    for(i=1;i<=40;i++)
    	printf("-");
    printf("\n");
	}
	
	int sum(int a, int b)
	{
		int r;
		printf("a=%d\n",a);
		printf("b=%d\n",b);
		r=a+b;
		return(r);
	}