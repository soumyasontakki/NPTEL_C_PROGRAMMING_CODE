//print a current system date

#include<stdio.h>
#include<time.h>

int main()
{
	time_t currentTime;
	struct tm *localtime;
	
	currentTime =time(NULL);
	localTime =localtime(&currentTime);
	
	printf("current date and time :%s \n",asctime(localTime));
	
	return 0;
}