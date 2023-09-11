//printing a 2D figure

#include<stdio.h>

int main()
{
    const int ROW=5;
	int row,col;
	
	for(row=1;row<=ROW;++row){
	  for(col=1;col<=row;++col)
	  {
	  	printf("*");
	  }
	  printf("\n");
     }
     return 0;
}