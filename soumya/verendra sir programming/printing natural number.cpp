//printing the natural number

#include<stdio.h>

main()
{
	int i=1,num;
	
	printf("enter the num:");
	scanf("%d",&num);
	
	while(i<=num)
	{
		printf("%d\n",i);
		i=i+1;
	}
	return 0;
}