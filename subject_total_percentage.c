#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5,total;
	float per;
	printf("Enter a number of sub1\n");
	scanf("%d",&sub1);
	printf("Enter a number of sub2\n");
	scanf("%d",&sub2);
	printf("Enter a number of sub3\n");
	scanf("%d",&sub3);
	printf("Enter a number of sub4\n");
	scanf("%d",&sub4);
	printf("Enter a number of sub5\n");
	scanf("%d",&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	per = ( total / 5 );
	printf("Total marks is %d and percentage is %f",total,per);
	return 0;
	
	
}
