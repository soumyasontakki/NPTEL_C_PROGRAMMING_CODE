//arrange the numbers in ascending order using bubble sort

#include<stdio.h>

int main()
{
	int n,a[40],i,j,t,ascending;
	 
	 printf("enter the number n:\n");
	 scanf("%d",&n);
	 printf("enter %d values\n",n);
	 for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   
	 
	printf("print as it is before sort\n");
	for(i=0;i<n;i++)
	    printf("%d   ",a[i]);
	    
	printf("numbers in ascending order:\n");
	 for(i=0;i<n;i++)		
	 for(j=0;j<(n-i-1);j++)
	   if(a[j]>a[j+1])
	   {
	   	t = a[j];
	   	a[j]=a[j+1];
	   	a[j+1]=t;
	   }
	printf("print as it is after sort\n");   
	   for(i=0;i<n;i++)
	    printf("%d   ",a[i]);
	return 0;
}