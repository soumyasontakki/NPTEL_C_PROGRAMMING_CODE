//sequence of squares of number

#include<stdio.h>
#define N 100000
#define A  2

main()
{
	int a;
	a=A;
	while (a<N)
	{
		printf("%d\n",a);
		a*=a;
	}
	return 0;
}