#include<stdio.h>
int main(){
	int a , b ,c, d;
	printf("Menu:\n");
	begin:
	printf("1. Addition\t 2. Subtraction\n 3. Multiply\t 4. Divide\n");
	printf("Enter number from 1-4\n");
	scanf ("%d",&a);
	printf("Enter any two number\n");
	scanf("%d%d",&b,&c);
	if (a==1){
		add(b,c);
	}
	else if ( a==2){
		sub(b,c);
	}
	else if ( a==3){
		mul(b,c);
	}
	else if ( a==4){
		div(b,c);
	}
	else{
		printf("Please enter 1 - 4");
		goto begin;
	}
}
int add(int x, int y){
	int sum = x+y;
	printf("Sum is : %d",sum);
}
int sub(int x, int y){
	int sub = x-y;
	printf("Sub is : %d",sub);
}
int mul(int x, int y){
	int mul = x*y;
	printf("Mul is : %d",mul);
}
int div(int x, int y){
	int div = x/y;
	printf("Div is : %d",div);
}
