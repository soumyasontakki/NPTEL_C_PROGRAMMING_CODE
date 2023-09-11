//find tha smallest and largest and their location

#include<stdio.h>

int main()
{
	int n,a[30],i=1,L_loc,S_loc,large,small;
	
	printf("enter the number n: \n");
	scanf("%d",&n);
	printf("enter %d values \n ",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	large=a[0];
	small=a[0];
	for (i=0;i<n;i++)
	 if(a[i]>n) 
	  { 
	    L_loc = i + 1;
		large = a[i];
	  }
	for	(i=0;i<n;i++)
	  if(a[i]<small)
	  {
	  	small=a[i];
	  	S_loc=i + 1;
		}
	printf("the small number is %d\n",small);
	printf("its location %d\n",S_loc);
	printf("the large number is %d\n",large);
	printf("its location %d\n",L_loc);
	return 0;
	
		
}