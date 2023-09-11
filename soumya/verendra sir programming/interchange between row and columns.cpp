#include<stdio.h>
int main()
{
	int m,n,a[5][5],i,j,row,cols,p,q,t;
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
	printf("interchange specified row: mention rows");
	scanf("%d%d",&p,&q);
	p--; q--;
	   for(j=0;j<n;j++)
	   {
	   	t=a[p][j];
	   	a[p][j]=a[q][j];
	   	a[q][j]=t;
	   	 }
	   
	printf("interchange specified column:");
	printf("In matrix form:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
     }    
	 return 0;  	
		
}