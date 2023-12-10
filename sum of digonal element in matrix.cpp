//sum of digonal element in matrix
#include<stdio.h>
int main()
{
	int x[3][3];
	int sum=0;
	int row,col;
	for(row=0;row<3;row++)
	{
	for(col=0;col<3;col++)
	{
		printf("enter the element of matrix:");
		scanf("%d",&x[row][col]);
	}
	}
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			if(row==col){
				sum=sum+x[row][col];
			}
					
		}
	}
	printf(" sum of digonal element in matrix=%d",sum);
	return 0;
}