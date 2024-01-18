//program to transpose 2x2 matrix
#include<stdio.h>
int main(){
	int i,j, m[2][2];
	printf("Enter the element value of 2x2 matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("Entered matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix is:\n");
	for(j=0;j<2;j++){
		for(i=0;i<2;i++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
