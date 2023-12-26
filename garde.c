#include<stdio.h>
int main(){
	int grade;
	printf("Enter grade\n");
	scanf("%d",&grade);
	if(grade<=100&&grade>=90){
		printf("A");
	}
	else if(grade<=89&&grade>=80){
		printf("B");
	}
	else if(grade<=79&&grade>=70){
		printf("C");
	}
	else if(grade<=69&&grade>=60){
		printf("D");
	}
	else{
		printf("E");
	}
	return 0;
}
