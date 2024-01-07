#include<stdio.h>

int main() {
    int i, j, k;
    for(i=3;i>=1;i--){
    	for(k=i;k>1;k--){
    		printf("\t");
		}
		for(j=3;j>=i;j--){
			printf("%d",i);
		}
		printf("\n");
	}
    

    return 0;
}

