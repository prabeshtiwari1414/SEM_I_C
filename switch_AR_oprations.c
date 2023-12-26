#include<stdio.h>
int main(){
	int oper;
	printf("Choose among options below ( 1-4 )\n");
	printf(" 1) Additions \t 2) Subtractions\n 3) Multiplications \t 4) Division\n");
	scanf("%d",&oper);
	int x,y;
	printf("Enter 2 number\n");
	scanf("%d%d",&x,&y);
	switch (oper){
		case 1: {
			
			int sum = x+y;
			printf("Sum is %d",sum);
			break;
		}
		case 2: {
			
			int sub = x-y;
			printf("Subtract is %d",sub);
			
			break;
		}
		case 3: {
			
			int mul=x*y;
			printf("Multiply is : %d ",mul);
			break;
		}
		case 4: {
			
			float div = (float)x/(float)y;
			printf("Divide is : %f",div);
			break;
		}
		default : {
			printf("Enter 1-4 integer only");
			break;
		}
	}
	return 0;
}
