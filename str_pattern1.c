#include<stdio.h>
#include<string.h>
int main(){
	char a[]="NEPAL";
	int i,j,len;
	len=strlen(a);
	for(i=len;i>=0;i--){
		for(j=0;j<=i;j++){
			printf("%c",a[i]);
		}
		printf("\n");
	}
}
