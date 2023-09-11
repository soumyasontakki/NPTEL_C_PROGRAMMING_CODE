//conduct linear search for given number

#include<stdio.h>
int main()
{
	int n,a[30],i=1,key,flag;
	
	printf("enter the number n:\n");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	
	printf("enter key number\n");
	scanf("%d",&key);
	
	flag=0;
	for(i=0;i<n;i++)
	  if(a[i]==key)
	  flag=1;
	  
	for(i=0;i<n;i++)
	 if(flag==1)
	 {
	 	printf("the number is found \n");
	 }
	 else
	 {
	 	printf("the number is not found \n");
	 }
	 
	 return 0;
}
     