#include<stdio.h>
int add(){
	int a,b,sum;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("The sum is %d\n",sum);
}
int main(){
	int i;
	for(i=0; i<10 ; i++){
		add();
	}
}

// printf()
//scanf()
