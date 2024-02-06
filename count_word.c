#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,len,count=0;
	printf("Enter a string \n");
	gets(str);
	len=strlen(str);
	for(i=0;i<=len;i++){
		if(str[i]==' '){
			count++;
		}
	}
	printf("The no of owrd are: %d\n",count+1);
}
