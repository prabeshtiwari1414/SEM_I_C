// function with  arguments and no return value
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	add(a,b);
}
int add(int x , int y){
	int sum;
	sum =  x+y;
	printf("Sum is %d",sum);
}
