//check in this no are palindrom or not
#include<stdio.h>
void main()
{
	int i,x,rev=0;
	printf("enter the no =");
	scanf("%d",&i);
	x=i;
	while(i>0)
	{
		rev=(rev*10)+i%10;
		i=i/10;
	}
	if(rev==x)
	{
	
	printf("this no is palindrom no");
    }
	else
	{
	
	printf("this no is not palindrom no");
    }
}