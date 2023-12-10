//find the upper trangular matrix
#include<stdio.h>
int main()
{
	int x[3][3],row,col;
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&x[row][col]);	
		}	
	}
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			if(row<=col){
			printf("%d",x[row][col]);
			}
		}	
		printf("\n");
	
	}	
	return 0;
}