//program that input two arrays and save sum of corresponding element of these array in a third array and print then
#include<stdio.h>
int main()
{
	int x[3],y[3],z[3],sum=0;
	for(int i=0;i<3;i++)
{
	scanf("%d",&x[i]);
	}	
		for(int i=0;i<3;i++)
{
	scanf("%d",&y[i]);
	}	
	
for(int i=0;i<3;i++){
	z[i]=x[i]+y[i];
}
for(int i=0;i<3;i++){
	printf("%d",z[i]);}
printf("\n");
	return 0;
}