#include<stdio.h>
#include<string.h>
int main(){
	int a;
	char str[50],temp[50];
	printf("Enter any string\n");
	gets(str);
	strcpy(temp,str);
	strrev(temp);
	a=strcmp(temp,str);
	if(a==0){
		printf("The string is plaindrome");
	}
	else{
		printf("The string is not palindrome");
	}
}
