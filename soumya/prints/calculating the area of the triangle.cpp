//calculating the area of the triangle

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,A,S2,S;
	S2=a + b + c;
	
	printf("Etner the value of a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	A=sqrt(S(S-a)(S-b)(S-c));
	
	printf("%d  \n",A);
	
	return 0;
	
}