//function with no arguments and return value

#include<stdio.h>
int main(){
	int sum;
	sum = add();
	printf("The sum is %d", sum);
}
int add(){
	int a , b, ram;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	ram = a+b;
	return ram;
}
