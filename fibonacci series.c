//fibonacci series
#include<stdio.h>
void main()
{
	int n,x,y,z;
	printf("enter the max limit");
	scanf("%d",&n);
	x=0,y=1,z=0;
	while(n>=z)
	{
		printf("\n%d",z);
		x=y;
		y=z;
		z=x+y;
	}
	
}