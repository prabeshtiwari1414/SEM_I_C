//transpose of m*n matrix
#include<stdio.h>
int main(){
	int i,j,m[10][10],p,q;
	printf("Enter a matrix size (mxn)\n");
	scanf("%d%d",&p,&q);
	printf("Enter a elements of matix\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("Entered of matix:\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matix:\n");
	for(j=0;j<q;j++){
		for(i=0;i<p;i++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
