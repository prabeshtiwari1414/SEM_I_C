//function with both arguments and return value

#include<stdio.h>
int main(){
	int a,b,sum;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	sum = add(a , b);         
	printf("The sum is %d",sum);
}
int add(int c, int d){
	int ram = c+d;
	return ram;
}
