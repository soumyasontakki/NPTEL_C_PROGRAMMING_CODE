#include<stdio.h>
#include<string.h>
int main()
{
	
	static char str1[] = "dills";
	static char str2[20];
	static char str3[] = "daffo";
	int i;
	strcpy(str2, str1); // Copy str1 to str2
    strcat(str3, str2); // Concatenate str2 to str3

    i = strcmp(str3, "daffodills");

	i = strcmp(strcat(str3,strcpy(str2,str1)),"daffodills");
	
	return 0;
}