//multiplication in matrix form

#include<stdio.h>

int main()
{
	int m,n,a[20][20],b[20][20],c[20][20],i,j,A,B,rows,cols,p,q,k;
	
	printf("Enter the order of A\n");
	scanf("%d%d",&m,&n);
	
	printf("Enter the order of B\n");
	scanf("%d%d",&p,&q);
	
	if(n==p) 
	printf("the multiplicatin of the matrix is possible\n");
	
	else
	printf("the multiplication of the matrix is not possible\n");
	
	printf("Enter the rows and cols in A matrix :\n");
	scanf("%d",&m,&n);
	printf("Enter %d values\n",m*n);
	  for(i=0;i<m;i++)
	    for(j=0;j<n;j++)
	      	      
	    scanf("%d",&a[i][j]);
		
	printf("Enter the rows and cols in B matrix :\n");
	scanf("%d",&p,&q);
	printf("Enter %d values\n",p*q);
	  for(i=0;i<m;i++)
	    for(j=0;j<n;j++)
		  		  
		  scanf("%d",&b[i][j]);

	printf("print in matrix form:\n");   
	  for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	       printf("%d  ",a[i][j]);
		  printf("\n");
	     }
	     
	printf("print in matrix form:\n");   
	  for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	       printf("%d  ",b[i][j]);
		  printf("\n");     
	     }
	     
	printf("maltiplication in matrix form\n");
	  for(i=0;i<m;i++)
	  	for(j=0;j<n;j++)
	  	{
	  	  for(k=0;k<n;k++)
	  	    c[i][j]=a[i][j]*b[i][j];
	  	      printf("%d  ",c[i][j]);
	  	     printf("\n"); 
	     }
	printf("print in matrix form:\n");   
	  for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	       printf("%d  ",c[i][j]);
		  printf("\n");     
	     }     
	     
	return 0;     
}