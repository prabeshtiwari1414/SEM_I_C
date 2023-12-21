#include<stdio.h>
int main(){
	int a,b;
	printf("Enter 2 number\n");
	scanf("%d%d",&a,&b);
	if(a<b){
		printf("%d is greater",b);
	}
	else{
		printf("%d is greater",a);
	}
	return 0;
}
