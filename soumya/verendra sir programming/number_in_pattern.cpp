//printing the number in pattern

#include<stdio.h>

int main()
{
	int row,col,ROW,i,n;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	   printf("print the number of %d ",n);
	   
	for(row=1;row<=ROW;++row) {  
	   for(col=1;col<=row;++col){
	     printf("*");
	  }
	  printf("\n");
      }
      return 0;
}