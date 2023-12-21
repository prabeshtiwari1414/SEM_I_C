#include<stdio.h>
int main(){
	char password[10], repassword[10];
	printf("Give password\n");
	scanf("%s",&password);
	printf("Enter a password\n");
	scanf("%s",&repassword);
	if (strcmp(password, repassword)==0){
		printf("Access Granted");
	}
	else{
		printf("Access Denied");
	}
	return 0;
}
