#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,len,count=0;
	printf("Enter a string\n");
	gets(str);
	strupr(str);
	len=strlen(str);
	for(i=0;i<=len;i++){
		if((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')){
			count++;
		}
	}
	printf("The no of vowels are: %d\n",count);
}
