#include<stdio.h>
void main(){
	int a;
	printf("Enter a number 1 or 2\n");
	scanf("%d",&a);
	switch(a){
		case 1 : 
			printf("Sunday");
			break;
		case 2 : 
			printf("Monday");
			break;
		default :
			printf("Please enter number 1 or 2");
	}
	return 0;

}
