#include<stdio.h>
int main(){
	char character;
	printf("Enter a letter\n");
	scanf("%c",&character);
	if(character<='z'&&character>='a'){
		printf("Lowercase");
	}
}
