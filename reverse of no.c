//write a program to find reverse of a number;
#include<stdio.h>
void main()
{
	int i,rev=0;
	printf("enter the no");
	scanf("%d",&i);
	while(i>0)
	{
		rev=(rev*10)+i%10;
		i=i/10;
	}
	printf("\n reverse=%d",rev);
}