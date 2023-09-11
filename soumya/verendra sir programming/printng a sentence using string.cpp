#include<stdio.h>
#include<string.h>

int main()
{
	char sentence[50],i;
	
	printf("Enter the sentence:\n");
	scanf("%s",sentence);
	
	for(i=0;sentence[i]!='\0';i++)
	  
		printf("%s  \n",sentence);
		
		return 0;
}