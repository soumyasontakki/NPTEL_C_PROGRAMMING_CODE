//average of the given matrix 

#include<stdio.h>
 int main()
 {
 	int m,n,a[5][5],i,j,sum=0;
 	float avg;
 	
 	printf("enter the number rows and cols :");
 	scanf("%d%d",&m,&n);
 	
 	printf("enter %d values \n",m*n);
 	 for(i=0;i<m;i++)
 	   for(j=0;j<n;j++)
 	   {
 	     scanf("%d",&a[i][j]);
 		
		 }
	printf("In the marix form:\n");
	   for(i=0;i<m;i++)
	   {
 	     for(j=0;j<n;j++)
 	       printf("%d  ",a[i][j]);
	  		printf("\n");
	     }

 	
 	 for(i=0;i<m;i++)
 	   for(j=0;j<n;j++)
 	   {
 	     sum=sum+a[i][j];
 	     
 	}
		printf("sum of all elements: %d\n",sum);
		 avg = sum / (m*n);
 	
		 printf("average=%f",avg);
 	    
 	    return 0;
 }