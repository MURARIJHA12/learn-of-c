//find the factorail value of n no;
#include<stdio.h>
void main()
{
	int i,fact=1;
	printf("enter the to find factorial");
	scanf("%d",&i);
	while(i>0)
	{
		fact=fact*i;
		i=i-1;
	}
	printf("\n factorial no=%d",fact);
}