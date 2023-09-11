//specified rows and column

#include<stdio.h>
int main()
{
	int m,n,a[5][5],i,j;
	printf("Enter number of rows and cols:");
	scanf("%d%d",&m,&n);
	
	printf("Enter %d values:\n",m*n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("In matrix form:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("specified row:");
	  i=0;
	   for(j=0;j<n;j++)
	    printf("%d  ",a[i][j]);
	    
	printf("specified column:");
	  j=0;
	   for(i=0;i<n;i++)
	    printf("%d  ",a[i][j]);    
	    
	 return 0;  
	
}