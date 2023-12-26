#include<stdio.h>
int main(){
	int age;
	printf("Enter age\n");
	scanf("%d",&age);
	if(age<1){
		printf("Infant");
	}
	else if(age<=12&&age>=1){
		printf("Child");
	}
	else if(age<=19&&age>12){
		printf("teenager");
	}
	else if(age<=59&&age>19){
		printf("adult");
	}
	else{
		printf("senior citizen");
	}
	return 0;
}
