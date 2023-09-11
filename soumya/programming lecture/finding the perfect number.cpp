//finding the perfect number

#include<stdio.h>

int main()
{
	int N;
	
	printf("Enter the number of N:\n");
	scanf("%d",&N);
	
  int i,sum=0;

 for(i=1 ; i<=N/2 ; i++){
  if(N % i == 0)
   {
      sum = sum + i;
    }
  }

   if(sum == N)
   {  
     printf("%d is a perfect number.",N);
   }

  else
  {
    printf("%d is not a perfect number.",N);
  } 

  return 0;
}
    
    