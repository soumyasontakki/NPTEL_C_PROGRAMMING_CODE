//age of 100 persons and count the person age between 50 & 60

#include<stdio.h>

int main()
{
	int count=0,i;
	
	for(i=0; i<100; i++)
	{
	  int age;
	  	
	  printf("Enter the age of person %d : ",i + 1);
	  scanf("%d",&age);
	
	  if (age>=50 && age<=60)
	  {
    	count++;
      }
    }
	printf("number of person age between 50 and 60 is: %d\n",count);
	  
	  return 0;
}