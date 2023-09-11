//addition in matrix

#include<stdio.h>

int main()
{
	int m,n,a[20][20],b[20][20],c[20][20],i,j,A,B,rows,cols,p,q;
	
	printf("Enter the order of A\n");
	scanf("%d%d",&m,&n);
	
	printf("Enter the order of B\n");
	scanf("%d%d",&p,&q);
	
	if(m==p) 
	  if(n==q)
	printf("the addition of the matrix is possible\n");
	
	else
	printf("the addition of the matrix is not possible\n");
	
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
	
	printf("addition of the matrix");     
	   for(i=0;i<m;i++)
	   {
	    for(j=0;j<n;j++)
		   c[i][j]=a[i][j]+b[i][j];  
		   
		  scanf("%d",&c[i][j]);
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