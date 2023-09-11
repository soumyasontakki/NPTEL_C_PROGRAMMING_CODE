//count number of odd and even values

#include<stdio.h>

int main()
{
	int i,n, evenCount = 0 ,oddCount = 0;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	printf("Enter %d values:\n",n);
	for(i=1 ;i<=n; i++){
		
		int num;
		scanf("%d",&num);
		
	  if(num % 2 == 0)
	  {
	  	evenCount++;
	  }
	  else
	  {
	  	oddCount++;
	  }
    }
    printf("the number of even values: %d\n",evenCount);
    printf("the number of odd values: %d\n",oddCount);
    
  return 0;
	  
}
	  