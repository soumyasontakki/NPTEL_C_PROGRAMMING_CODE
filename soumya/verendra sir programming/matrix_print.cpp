/*Read elements of matrix and print it in matrix form*/
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
}