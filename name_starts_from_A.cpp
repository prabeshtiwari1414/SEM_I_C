#include<stdio.h>
#include<string.h>
int main(){
	char n[5][20], temp[20];
	int i,j;
	printf("Enter any five names\n");
	for(i=0;i<5;i++){
		gets(n[i]);
		strupr(n[i]);
	}
	printf("Names are:\n");
	for(i=0;i<5;i++){
		puts(n[i]);
	}
	printf("The names begining from A are:\n");
	for(i=0;i<5;i++){
		if((n[i][0])=='A'){
			printf("%s\n",n[i]);
		}
	}
}
