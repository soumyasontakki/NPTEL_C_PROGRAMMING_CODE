#include<stdio.h>
#include<string.h>

int main()
{
	char name[20],address[20],i;
	
	printf("Enter the name and address:\n");
	scanf("%s%s",&name,&address);
	

		printf("%s  \n",name);
	
	for(i=0;address[i]!='\0';i++)
	
		printf("%s  \n",address);
	
	
	return 0;
	
}