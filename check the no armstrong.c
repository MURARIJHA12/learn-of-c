//program to check whether a give no is armstorong number or not
#include<stdio.h>
void main()
{
	int i,x,sum=0;
	printf("enter the no ");
	scanf("%d",&i);
	x=i;
	while(i>0)
	{
		sum=sum+(i%10)*(i%10)*(i%10);
		i=i/10;
	}
	
	if(sum==x)
	printf("\nno is armstrong");
	else
	printf("\nno is not armstrong");
}