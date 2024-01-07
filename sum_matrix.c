#include<stdio.h>
int main(){
	int i, j , a[2][2], b[2][2];
	printf("Enter A 2x2 matix elements\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter B 2x2 matix elements\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("SUm of A and B matix is : \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
