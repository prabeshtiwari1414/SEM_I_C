#include<stdio.h>
int main(){
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num<0){
		printf("%d is negative",num);
	}
	else{
		if(num==0){
			printf("%d is zero",num);
		}
		else{
			printf("%d is positive",num);
		}
	}
}
