//write a program to find sum of digits of a given numbers
#include<stdio.h>
void main()
{
	int i,sum=0;
	printf("\nenter the no");
	scanf("%d",&i);
	while(i>0)
	{
		sum=sum+i%10;
		i=i/10;
	}
	printf("\n sum of digits=%d",sum);
}