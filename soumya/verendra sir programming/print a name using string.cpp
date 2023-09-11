//printing the first word in the sentence

#include<stdio.h>
#include<string.h>

int main()
{
	char name[20],i;
	
	printf("Enter the name:\n");
	gets(name);
	printf("%c   ",i,name[0]);
	for(i=0;name[i]!='\0';i++) 
		if(name[i]==' ')
			printf("%c   ",name[i+1]);
	return 0;
	
}