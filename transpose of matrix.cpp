//transpose of matrix
#include<stdio.h>
int main()
{
	int x[3][3],t[3][3],row,col;
	for(row=0;row<3;row++){
	for(col=0;col<3;col++){	
		printf("enter the element of matrix=");
		scanf("%d",&x[row][col]);
	}	
	}
		for(row=0;row<3;row++){
	for(col=0;col<3;col++){
     t[col][row]=x[row][col];
	}	
	}
		for(row=0;row<3;row++){
	for(col=0;col<3;col++){
	
		printf("%d\n",t[row][col]);
	}}

	
	return 0;
}