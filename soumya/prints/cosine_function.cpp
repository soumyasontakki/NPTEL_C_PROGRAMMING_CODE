//program is using to cosine function

#include<stdio.h>
#include<math.h>

#define PI 3.14
#define MAX 180

int main()
{
	int angle;
	float x,y;
	angle = 0;
	printf("angle cos (angle\n\n)");
	
	while(angle<=MAX)
	{
		x = (PI/MAX)*angle;
		y = cos(x);
		printf("%15d %13.4f\n", angle, y);
		angle = angle + 10;
	}
}