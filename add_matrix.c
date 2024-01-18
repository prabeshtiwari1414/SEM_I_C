//program to add 2x2 matrix
#include<stdio.h>
int main(){
	int i,j, m[2][2], n[2][2];
	printf("Enter the element value of 2x2 matrix A\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("Enter the element value of 2x2 matrix B\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&n[i][j]);
		}
	}
	printf("Entered matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",m[i][j]+n[i][j]);
		}
		printf("\n");
	}
	return 0;
}
