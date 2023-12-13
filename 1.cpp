//program that simple takes element of the array from the user and find the sum of thes element
#include<stdio.h>
int main()
{
	int x[3],sum=0;
	for(int i=0;i<3;i++)
	{
	scanf("%d",&x[i]);
	}	
	for(int i=0;i<3;i++)
	{
	sum=sum+x[i];
	}
	printf("%d",sum);
	return 0;
}