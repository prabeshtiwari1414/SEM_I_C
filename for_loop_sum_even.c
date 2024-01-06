#include<stdio.h>
int main(){
	int sum=0, i, n;
	printf("Enter a number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("Sum is %d",sum);
	return 0;
}
